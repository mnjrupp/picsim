/* ########################################################################

   PICsim - PIC simulator

   ########################################################################

   Copyright (c) : 2008-2015  Luis Claudio Gamb�a Lopes

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

   For e-mail suggestions :  lcgamboa@yahoo.com
   ######################################################################## */


#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#ifdef WIN32
#include "unistd.h"
#else
#include <unistd.h>
#endif
#include <string.h>

#ifdef WIN32
#include <conio.h>
#include <time.h>
#include <windows.h>
#else
#include <termios.h>
#include <sys/ioctl.h>
#endif

#include "picsim.h"
#include "periferic.h"
#include "periferic18.h"
        
#define _POSIX_SOURCE 1 /* POSIX compliant source */
#define FALSE 0
#define TRUE 1
        


int 
serial_open(_pic * pic)
{
      if(pic->SERIALDEVICE[0] == 0)
      { 	
#ifdef WIN32
        strcpy(pic->SERIALDEVICE,"COM2");
#else
        strcpy(pic->SERIALDEVICE,"/dev/tnt2");
#endif
      }

  pic->bc=0;
  pic->sr=0;
  pic->serialc=0;
  pic->recb=0;
  pic->s_open=0;

#ifdef WIN32
  pic->serialfd = CreateFile(pic->SERIALDEVICE, GENERIC_READ | GENERIC_WRITE,
0, // exclusive access
NULL, // no security
OPEN_EXISTING,
0, // no overlapped I/O
NULL); // null template
  if( pic->serialfd == INVALID_HANDLE_VALUE)
  {
     pic->serialfd=0;
//     printf("Erro on Port Open:%s!\n",pic->SERIALDEVICE);
     return 0; 
  }
#else
  pic->serialfd = open(pic->SERIALDEVICE, O_RDWR | O_NOCTTY | O_NONBLOCK);
 
  if (pic->serialfd < 0) 
  {
    pic->serialfd=0;
    perror(pic->SERIALDEVICE); 
//    printf("Erro on Port Open:%s!\n",pic->SERIALDEVICE);
    return 0; 
  }
//  printf("Port Open:%s!\n",pic->SERIALDEVICE);
#endif
  return 1;
}

int 
serial_close(_pic * pic)
{
  if (pic->serialfd != 0) 
  {
#ifdef WIN32
  CloseHandle(pic->serialfd);
#else    
    close(pic->serialfd);
#endif
    pic->serialfd=0;
  }
  return 0;
}



int
serial_cfg(_pic * pic)
{
    unsigned int BAUDRATE;
   
    if(pic->family == P16)
    { 
      if(pic->ram[TXSTA] & 0x04) //BRGH=1 
      {
         pic->serialexbaud=pic->freq/(16*(pic->ram[SPBRG]+1));
      }
      else
      {
        pic->serialexbaud=pic->freq/(64*(pic->ram[SPBRG]+1));
      }
    }
    else
    {
      if(pic->ram[P18_TXSTA] & 0x04) //BRGH=1 
      {
         pic->serialexbaud=pic->freq/(16*(pic->ram[P18_SPBRG]+1));
      }
      else
      {
        pic->serialexbaud=pic->freq/(64*(pic->ram[P18_SPBRG]+1));
      }

    }



    switch(((int)((pic->serialexbaud/300.0)+0.5))) 
    {
		case 0:
		case 1:
          pic->serialbaud=300;
          #ifndef WIN32
          BAUDRATE=B300;
          #else
          BAUDRATE=300;
          #endif  
          break; 
		case 2:
		case 3:
          pic->serialbaud=600;
          #ifndef WIN32
          BAUDRATE=B600;
          #else
          BAUDRATE=600;
          #endif  
          break; 
		case 4: case 5: case 6: case 7:
          pic->serialbaud=1200;
          #ifndef WIN32
          BAUDRATE=B1200;
          #else
          BAUDRATE=1200;
          #endif  
          break; 
       case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15:
          pic->serialbaud=2400;
          #ifndef WIN32
          BAUDRATE=B2400;
          #else
          BAUDRATE=2400;
          #endif  
          break; 
	   case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23: case 24: case 25: case 26: case 27:
	   case 28: case 29: case 30: case 31:
          pic->serialbaud=4800;
          #ifndef WIN32
          BAUDRATE=B4800;
          #else
          BAUDRATE=4800;
          #endif  
          break; 
	   case 32: case 33: case 34: case 35: case 36: case 37: case 38: case 39: case 40: case 41: case 42: case 43:
	   case 44: case 45: case 46: case 47: case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55:
	   case 56: case 57: case 58: case 59: case 60: case 61: case 62: case 63:
          pic->serialbaud=9600;
          #ifndef WIN32
          BAUDRATE=B9600;
          #else
          BAUDRATE=9600;
          #endif  
          break; 
	   case 64: case 65: case 66: case 67: case 68: case 69: case 70: case 71: case 72: case 73: case 74: case 75:
	   case 76: case 77: case 78: case 79: case 80: case 81: case 82: case 83: case 84: case 85: case 86: case 87:
	   case 88: case 89: case 90: case 91: case 92: case 93: case 94: case 95: case 96: case 97: case 98: case 99:
	   case 100: case 101: case 102: case 103: case 104: case 105: case 106: case 107: case 108: case 109: case 110:
	   case 111: case 112: case 113: case 114: case 115: case 116: case 117: case 118: case 119: case 120: case 121:
	   case 122: case 123: case 124: case 125: case 126: case 127:
          pic->serialbaud=19200;
          #ifndef WIN32
          BAUDRATE=B19200;
          #else
          BAUDRATE=19200;
          #endif  
          break; 
	   case 128: case 129: case 130: case 131: case 132: case 133: case 134: case 135: case 136: case 137: case 138: case 139: case 140: case 141:
	   case 142: case 143: case 144: case 145: case 146: case 147: case 148: case 149: case 150: case 151: case 152: case 153: case 154: case 155:
	   case 156: case 157: case 158: case 159: case 160: case 161: case 162: case 163: case 164: case 165: case 166: case 167: case 168: case 169:
	   case 170: case 171: case 172: case 173: case 174: case 175: case 176: case 177: case 178: case 179: case 180: case 181: case 182: case 183:
	   case 184: case 185: case 186: case 187: case 188: case 189: case 190: case 191:
          pic->serialbaud=38400;
          #ifndef WIN32
          BAUDRATE=B38400;
          #else
          BAUDRATE=38400;
          #endif  
          break; 
	   case 192: case 193: case 194: case 195: case 196: case 197: case 198: case 199: case 200: case 201: case 202: case 203: case 204:
	   case 205: case 206: case 207: case 208: case 209: case 210: case 211: case 212: case 213: case 214: case 215: case 216: case 217:
	   case 218: case 219: case 220: case 221: case 222: case 223: case 224: case 225: case 226: case 227: case 228: case 229: case 230:
	   case 231: case 232: case 233: case 234: case 235: case 236: case 237: case 238: case 239: case 240: case 241: case 242: case 243:
	   case 244: case 245: case 246: case 247: case 248: case 249: case 250: case 251: case 252: case 253: case 254: case 255: case 256:
	   case 257: case 258: case 259: case 260: case 261: case 262: case 263: case 264: case 265: case 266: case 267: case 268: case 269:
	   case 270: case 271: case 272: case 273: case 274: case 275: case 276: case 277: case 278: case 279: case 280: case 281: case 282:
	   case 283: case 284: case 285: case 286: case 287: case 288: case 289: case 290: case 291: case 292: case 293: case 294: case 295:
	   case 296: case 297: case 298: case 299: case 300: case 301: case 302: case 303: case 304: case 305: case 306: case 307: case 308:
	   case 309: case 310: case 311: case 312: case 313: case 314: case 315: case 316: case 317: case 318: case 319: case 320: case 321:
	   case 322: case 323: case 324: case 325: case 326: case 327: case 328: case 329: case 330: case 331: case 332: case 333: case 334:
	   case 335: case 336: case 337: case 338: case 339: case 340: case 341: case 342: case 343: case 344: case 345: case 346: case 347:
	   case 348: case 349: case 350: case 351: case 352: case 353: case 354: case 355: case 356: case 357: case 358: case 359: case 360:
	   case 361: case 362: case 363: case 364: case 365: case 366: case 367: case 368: case 369: case 370: case 371: case 372: case 373:
	   case 374: case 375: case 376: case 377: case 378: case 379: case 380: case 381: case 382: case 383:
          pic->serialbaud=57600;
          #ifndef WIN32
          BAUDRATE=B57600;
          #else
          BAUDRATE=57600;
          #endif  
          break; 
       default:
          pic->serialbaud=115200;
          #ifndef WIN32
          BAUDRATE=B115200;
          #else
          BAUDRATE=115200;
          #endif  
          break; 
    } 

#ifdef WIN32
  BOOL bPortReady;
  DCB dcb;
  COMMTIMEOUTS CommTimeouts;

bPortReady = GetCommState(pic->serialfd , &dcb);
dcb.BaudRate = BAUDRATE;
dcb.ByteSize = 8;
dcb.Parity = NOPARITY;
dcb.StopBits = ONESTOPBIT;
dcb.fAbortOnError = TRUE;

// set XON/XOFF
dcb.fOutX = FALSE; // XON/XOFF off for transmit
dcb.fInX = FALSE; // XON/XOFF off for receive
// set RTSCTS
dcb.fOutxCtsFlow = FALSE; // turn off CTS flow control
//dcb.fRtsControl = RTS_CONTROL_HANDSHAKE; //
dcb.fRtsControl = RTS_CONTROL_DISABLE; //
// set DSRDTR
dcb.fOutxDsrFlow = FALSE; // turn off DSR flow control
//dcb.fDtrControl = DTR_CONTROL_ENABLE; //
dcb.fDtrControl = DTR_CONTROL_DISABLE; //
// dcb.fDtrControl = DTR_CONTROL_HANDSHAKE; //

bPortReady = SetCommState(pic->serialfd , &dcb);

// Communication timeouts are optional

bPortReady = GetCommTimeouts (pic->serialfd , &CommTimeouts);

CommTimeouts.ReadIntervalTimeout = MAXDWORD;
CommTimeouts.ReadTotalTimeoutConstant = 0;
CommTimeouts.ReadTotalTimeoutMultiplier = 0;
CommTimeouts.WriteTotalTimeoutConstant = 0;
CommTimeouts.WriteTotalTimeoutMultiplier = 0;

bPortReady = SetCommTimeouts (pic->serialfd , &CommTimeouts);
	

EscapeCommFunction(pic->serialfd ,SETRTS );

#else
   struct termios newtio;
   int cmd;   
        
//        tcgetattr(fd,&oldtio); /* save current port settings */
        
        bzero(&newtio, sizeof(newtio));
        newtio.c_cflag = BAUDRATE |CS8 | CLOCAL | CREAD;
        newtio.c_iflag = IGNPAR|IGNBRK;
        newtio.c_oflag = 0;
        
        /* set input mode (non-canonical, no echo,...) */
        newtio.c_lflag = 0;
         
        newtio.c_cc[VTIME]    = 0;   /* inter-character timer unused */
        newtio.c_cc[VMIN]     = 5;   /* blocking read until 5 chars received */
        
        tcflush(pic->serialfd, TCIFLUSH);
        tcsetattr(pic->serialfd,TCSANOW,&newtio);
        
	cmd=TIOCM_RTS;
	ioctl(pic->serialfd, TIOCMBIS ,&cmd);
#endif

	return 0; 
}


      
unsigned long serial_send(_pic * pic, unsigned char c)
{
  if(pic->serialfd)
  {
#ifdef WIN32
   unsigned long nbytes;
    
   WriteFile(pic->serialfd, &c, 1, &nbytes,NULL);
   return nbytes;
#else
  return write (pic->serialfd,&c,1);   
#endif
  }
  else
    return 0;
}

unsigned long serial_rec(_pic * pic, unsigned char * c)
{
  if(pic->serialfd)
  {
#ifdef WIN32
    unsigned long nbytes;
      
    ReadFile(pic->serialfd, c, 1,&nbytes, NULL);
#else
    long nbytes;

     nbytes = read (pic->serialfd,c,1);   
     if(nbytes<0)nbytes=0;
#endif    
    return nbytes;
   }
   else
     return 0;
}

unsigned long serial_rec_tout(_pic * pic, unsigned char * c)
{
 unsigned int tout=0;

  if(pic->serialfd)
  {
#ifdef WIN32
    unsigned long nbytes;
    do
    { 
      Sleep(1);	
      ReadFile(pic->serialfd, c, 1,&nbytes, NULL);
#else
    long nbytes;
    do
    { 
      usleep(100);
      nbytes = read (pic->serialfd,c,1);   
      if(nbytes<0)nbytes=0;
#endif    
      tout++;
    }while((nbytes == 0 )&&(tout < 1000));
    return nbytes;
   }
   else
     return 0;
}


unsigned long serial_recbuff(_pic * pic, unsigned char * c)
{
int i;


  if(pic->flowcontrol)
  {
  
   if(serial_rec(pic,&pic->buff[pic->bc]) == 1)
    {
     pic->bc++;

     if(pic->bc > BUFFMAX)
     {
       printf("serial buffer overflow \n") ;
       pic->bc = BUFFMAX-1;  
//       getchar();	
     };
    }


    if((pic_get_pin(pic,pic->ctspin) == 0)&&(pic->bc > 0))
    {
      *c=pic->buff[0];

      pic->bc--;
      for(i=0;i<pic->bc;i++)
        pic->buff[i]=pic->buff[i+1]; 
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
     return serial_rec(pic,c);
  }
  
}





void serial(_pic * pic,int print)
{
  unsigned char rctemp;


  if((pic->ram[RCSTA] & 0x80)==0x80)
  {
    if(pic->s_open == 0) 
    {

      if(pic->serialfd > 0)
      {
        serial_cfg(pic);
        pic->s_open=1;
       if(print)printf("#Open Port:%s!\n",pic->SERIALDEVICE);
      }
      else
      {
        if(print)printf("#Erro Open Port:%s!\n",pic->SERIALDEVICE);
        pic->s_open=-1;
      }
      pic->ram[TXSTA]|=0x02; //TRMT=1 empty 
      pic->ram[PIR1]|=0x10; //TXIF=1  
    }
   pic->pins[pic->usart[0]-1].ptype=PT_USART;
   pic->pins[pic->usart[1]-1].ptype=PT_USART;
   
   if(pic->flowcontrol)pic_set_pin(pic, pic->rtspin,0); //enable send
  }
  else
  {
    if(pic->s_open == 1)
    {
      pic->s_open=0;
    }
   pic->pins[pic->usart[0]-1].ptype=PT_CMOS;
   pic->pins[pic->usart[1]-1].ptype=PT_CMOS;
   if(pic->flowcontrol)pic_set_pin(pic, pic->rtspin,1); //disable send
  }
  

   if(pic->lram == TXREG)    
    { 
      pic->txtemp=pic->ram[TXREG];
      pic->ram[TXSTA]&=~0x02; //TRMT=0 full   
      pic->ram[PIR1]&=~0x10; //TXIF=0 trasmiting 
    }
   

   if(pic->lram == RCSTA)
   {               //CREN 
      if((pic->ram[RCSTA] & 0x10) == 0)
      {  
       pic->ram[RCSTA]&=~0x02; //clear OERR
       pic->serialc=0;
      }
   }    


   if(pic->rram == RCREG)    
    { 
      switch(pic->recb)
      {
        case 1:
          pic->ram[RCREG]=0;
          pic->ram[PIR1]&=~0x20; //clear RCIF
          pic->recb--;    
          break;
        case 2:
          pic->ram[RCREG]=pic->RCREG2;
          pic->RCREG2=0; 
	  pic->recb--;    
          break;
        default:
        break; 
      }

    }


    pic->serialc++;

    if((pic->ram[TXSTA] & 0x04) == 0x04)
    {
       //BRGH=1  start + 8 bits + stop
       if(pic->serialc >= ((pic->ram[SPBRG]+1)*40))pic->sr =1;
    }
    else
    {
       //BRGH=0  start + 8 bits + stop
       if(pic->serialc >= ((pic->ram[SPBRG]+1)*160))pic->sr =1;
    }

  
    if(pic->sr ==1 )
    {
    
     pic->serialc=0;
     
     
     
     if((pic->s_open != 0)&&((pic->ram[pic->pins[pic->usart[0]-1].port+0x80] &  (0x01 << pic->pins[pic->usart[0]-1].pord)) != 0))//work only if RX TRIS is set
     {
      if(serial_recbuff(pic,&rctemp) == 1)
      {

        if((pic->ram[RCSTA] & 0x12) == 0x10)//CREN=1  OERR=0 
        { 
         switch(pic->recb)
         {
         case 0: 
           pic->ram[RCREG]=rctemp;
	   pic->RCREG2=0;
           pic->recb++;
           break;
         case 1: 
           pic->RCREG2=rctemp;
           pic->recb++;
           break; 
         default: 
           pic->ram[RCSTA]|=0x02; //set OERR
           break; 
          }
        }
        
   //       printf("reb=%i temp=%02X RCREG=%02X RECREG2=%02X  RCSTA=%02X\n",pic->recb,rctemp,pic->ram[RCREG],pic->RCREG2,pic->ram[RCSTA]);
        
         if(((pic->ram[PIE1] & 0x20) == 0x20)&&((pic->ram[PIR1] & 0x20) != 0x20))
         {
           if(print)printf("serial rx interrupt (%#04X)\n",rctemp);
         }
         //set RCIF
         pic->ram[PIR1]|=0x20;  
      }
     } 
    
      //if(((pic->ram[TXSTA] & 0x02) == 0 )&&((pic->ram[pic->pins[pic->usart[1]-1].port+0x80] &  (0x01 << pic->pins[pic->usart[1]-1].pord)) != 0))
      if((pic->ram[TXSTA] & 0x02) == 0 )
      {   
        if(pic->s_open == 1 ) serial_send(pic,pic->txtemp);
        pic->ram[TXSTA]|=0x02; //TRMT=1 empty  
    
        if(((pic->ram[PIE1] & 0x10) == 0x10)&&((pic->ram[PIR1] & 0x10) != 0x10))
        {
          if(print)printf("serial tx interrupt (%#04X)\n",pic->txtemp);
        }
        pic->ram[PIR1]|=0x10; //TXIF=1  
      }   
      pic->sr=0;
    }

//Hardware flowcontrol



}

void serial18(_pic * pic,int print)
{
  unsigned char rctemp;


  if((pic->ram[P18_RCSTA] & 0x80)==0x80)
  {
    if(pic->s_open == 0) 
    {

      if(pic->serialfd > 0)
      {
        serial_cfg(pic);
        pic->s_open=1;
       if(print)printf("#Open Port:%s!\n",pic->SERIALDEVICE);
      }
      else
      {
        if(print)printf("#Erro Open Port:%s!\n",pic->SERIALDEVICE);
        pic->s_open=-1;
      }
      pic->ram[P18_TXSTA]|=0x02; //TRMT=1 empty 
      pic->ram[P18_PIR1]|=0x10; //TXIF=1  
    }
   pic->pins[pic->usart[0]-1].ptype=PT_USART;
   pic->pins[pic->usart[1]-1].ptype=PT_USART;
   
   if(pic->flowcontrol)pic_set_pin(pic, pic->rtspin,0); //enable send
  }
  else
  {
    if(pic->s_open == 1)
    {
      pic->s_open=0;
    }
   pic->pins[pic->usart[0]-1].ptype=PT_CMOS;
   pic->pins[pic->usart[1]-1].ptype=PT_CMOS;
   if(pic->flowcontrol)pic_set_pin(pic, pic->rtspin,1); //disable send
  }
  

   if(pic->lram == P18_TXREG)    
    { 
      pic->txtemp=pic->ram[P18_TXREG];
      pic->ram[P18_TXSTA]&=~0x02; //TRMT=0 full   
      pic->ram[P18_PIR1]&=~0x10; //TXIF=0 trasmiting 
    }
   

   if(pic->lram == P18_RCSTA)
   {               //CREN 
      if((pic->ram[P18_RCSTA] & 0x10) == 0)
      {  
       pic->ram[P18_RCSTA]&=~0x02; //clear OERR
       pic->serialc=0;
      }
   }    


   if(pic->rram == P18_RCREG)    
    { 
      switch(pic->recb)
      {
        case 1:
          pic->ram[P18_RCREG]=0;
          pic->ram[P18_PIR1]&=~0x20; //clear RCIF
          pic->recb--;    
          break;
        case 2:
          pic->ram[P18_RCREG]=pic->RCREG2;
          pic->RCREG2=0; 
	  pic->recb--;    
          break;
        default:
        break; 
      }

    }


    pic->serialc++;

    if(pic->ram[P18_TXSTA] & 0x04)
    {
       //BRGH=1  start + 8 bits + stop
       if(pic->serialc >= ((pic->ram[P18_SPBRG]+1)*40))pic->sr =1;
    }
    else
    {
       //BRGH=0  start + 8 bits + stop
       if(pic->serialc >= ((pic->ram[P18_SPBRG]+1)*160))pic->sr =1;
    }

  
    if(pic->sr ==1 )
    {
    
     pic->serialc=0;
  
     if((pic->s_open != 0)&&((pic->ram[pic->pins[pic->usart[0]-1].port+0x12] &  (0x01 << pic->pins[pic->usart[0]-1].pord)) != 0)) //work only if RX tris bit is set
     {
      if(serial_recbuff(pic,&rctemp) == 1)
      {

        if((pic->ram[P18_RCSTA] & 0x12) == 0x10)//CREN=1  OERR=0 
        { 
         switch(pic->recb)
         {
         case 0: 
           pic->ram[P18_RCREG]=rctemp;
	   pic->RCREG2=0;
           pic->recb++;
           break;
         case 1: 
           pic->RCREG2=rctemp;
           pic->recb++;
           break; 
         default: 
           pic->ram[P18_RCSTA]|=0x02; //set OERR
           break; 
          }
        }
        
   //       printf("reb=%i temp=%02X RCREG=%02X RECREG2=%02X  RCSTA=%02X\n",pic->recb,rctemp,pic->ram[RCREG],pic->RCREG2,pic->ram[RCSTA]);
        
         if(((pic->ram[P18_PIE1] & 0x20) == 0x20)&&((pic->ram[P18_PIR1] & 0x20) != 0x20))
         {
           if(print)printf("serial rx interrupt (%#04X)\n",rctemp);
         }
         //set RCIF
         pic->ram[P18_PIR1]|=0x20;  
      }
     } 
    
      //if(((pic->ram[P18_TXSTA] & 0x02) == 0 ) &&((pic->ram[pic->pins[pic->usart[1]-1].port+0x12] &  (0x01 << pic->pins[pic->usart[1]-1].pord)) == 0))
      if((pic->ram[P18_TXSTA] & 0x02) == 0 )
       {   
        if(pic->s_open == 1 ) serial_send(pic,pic->txtemp);
        pic->ram[P18_TXSTA]|=0x02; //TRMT=1 empty  
    
        if(((pic->ram[P18_PIE1] & 0x10) == 0x10)&&((pic->ram[P18_PIR1] & 0x10) != 0x10))
        {
          if(print)printf("serial tx interrupt (%#04X)\n",pic->txtemp);
        }
        pic->ram[P18_PIR1]|=0x10; //TXIF=1  
      }   
      pic->sr=0;
    }

//Hardware flowcontrol



}


void 
pic_set_serial(_pic * pic, char * name, int flowcontrol,int ctspin,int  rtspin)
{
  strcpy(pic->SERIALDEVICE,name);
  
  pic->flowcontrol=flowcontrol;
  pic->serialfd=0;
  if(flowcontrol == 1)
  {
    pic->ctspin=ctspin;
    pic->rtspin=rtspin;
  }
};
