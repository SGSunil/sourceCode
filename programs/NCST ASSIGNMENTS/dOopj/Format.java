import ncst.pgdst.*;
//import java.lang.*;

public class Format{

public static void main(String args[])
throws IOException{

String in=new String();
char str[];
int i=0,len,j=0,n=0;

SimpleInput sin=new SimpleInput();
SimpleOutput sout=new SimpleOutput();
boolean ib=true;//for checking whether 0 is in the begining
boolean z=true;//for checking is there is No integral part or it is 0
boolean im=false,status=false;//for checking middle 0
in=sin.readLine();
//in=in+"n";
str=in.toCharArray();
len=in.length();

/*while(str[i]!='n')
	{
	sout.writelnChar(str[i]);
	i++;
	}
*/

while(str[i]!='.')
	{
	i++;
	continue;
	}

i++;

while(i<len)
	{
	if(((str[i]=='0')&(ib==false))|(str[i]!='0'))
		{
		if(str[i]!='0')
				{
				ib=false;
				status=true;

				}
		++n;
		sout.writeChar(str[i]);
		}
	i++;
	}
//end of the integer part of the new no.

n=5-n;
while(n>0)
	{

	sout.writeChar('#');

	--n;
	}

sout.writeChar('.');
ib=true;
i=0;


//formatting for the Decimal part for the new no.
while((str[i]!='.')&(i<len))
	{
	if(((str[i]=='0')& (ib==true))|((im==true)&(str[i]=='0'))|(str[i]!='0'))
		{
		if(str[i]!='0')
			{
			z=false;
			sout.writeChar(str[i]);
			ib=false;
			}
		else
			{
			j=i+1;
			im=false;
			while((str[j]!='.')&(j<len))
				{
				if((str[j]!='0'))
					{
					im=true;
					status=true;
					}
				j++;
				}

			if((((str[j-1]=='0')&(ib==true))|((str[j-1]=='0')&(im==true)))&(status==true))
				sout.writeChar(str[i]);
			}	
			}
	i++;
	}


if(z==true)
sout.writeChar('0');


sout.writelnChar('\n');

}
}
