void d2b(float dec)
{
	float nul;
	long int i,j,decn,count=0, af[4],deci,div=1234,ch;
	int bi[100];
	char dn[100];
	deci=dec;
	nul=dec-deci;
	decn=dec;
	for(i=0;decn>0;i++)
	{
	decn=decn/2;
	}
	decn=dec;
	for(j=i-1;j>=0;j--)
	{
		bi[j]=deci%2;
		deci=deci/2;
	}
	printf ("%.2f base 10 :: ",dec);
	for(j=0;j<i;j++)
	{
		printf("%ld",bi[j]);
	}
	printf(".");
	for(j=0;j<4;j++)
	{
		nul=nul*2;
		af[j]=nul;
		printf("%ld",af[j]);
		nul=nul-af[j];
	}
	printf(" base 2.\n");
}

void d2te(float dec)
{
	float nul;
	long int i,j,decn,count=0, af[4],deci,div=1234,ch;
	int bi[100];
	char dn[100];
	deci=dec;
	nul=dec-deci;
	decn=dec;
	for(i=0;decn>0;i++)
	{
	decn=decn/3;
	}
	decn=dec;
	for(j=i-1;j>=0;j--)
	{
		bi[j]=deci%3;
		deci=deci/3;
	}
	printf ("%.2f base 10 :: ",dec);
	for(j=0;j<i;j++)
	{
		printf("%ld",bi[j]);
	}
	printf(".");
	for(j=0;j<4;j++)
	{
		nul=nul*3;
		af[j]=nul;
		printf("%ld",af[j]);
		nul=nul-af[j];
	}
	printf(" base 3.\n");
}

void d2qua(float dec)
{
	float nul;
	long int i,j,decn,count=0, af[4],deci,div=1234,ch;
	int bi[100];
	char dn[100];
	deci=dec;
	nul=dec-deci;
	decn=dec;
	for(i=0;decn>0;i++)
	{
	decn=decn/4;
	}
	decn=dec;
	for(j=i-1;j>=0;j--)
	{
		bi[j]=deci%4;
		deci=deci/4;
	}
	printf ("%.2f base 10 :: ",dec);
	for(j=0;j<i;j++)
	{
		printf("%ld",bi[j]);
	}
	printf(".");
	for(j=0;j<4;j++)
	{
		nul=nul*4;
		af[j]=nul;
		printf("%ld",af[j]);
		nul=nul-af[j];
	}
	printf(" base 4.\n");
}

void d2qui(float dec)
{
	float nul;
	long int i,j,decn,count=0, af[4],deci,div=1234,ch;
	int bi[100];
	char dn[100];
	deci=dec;
	nul=dec-deci;
	decn=dec;
	for(i=0;decn>0;i++)
	{
	decn=decn/5;
	}
	decn=dec;
	for(j=i-1;j>=0;j--)
	{
		bi[j]=deci%5;
		deci=deci/5;
	}
	printf ("%.2f base 10 :: ",dec);
	for(j=0;j<i;j++)
	{
		printf("%ld",bi[j]);
	}
	printf(".");
	for(j=0;j<4;j++)
	{
		nul=nul*5;
		af[j]=nul;
		printf("%ld",af[j]);
		nul=nul-af[j];
	}
	printf(" base 5.\n");
}

void d2oct(float dec)
{
	float nul;
	long int i,j,decn,count=0, af[4],deci,div=1234,ch;
	int bi[100];
	char dn[100];
	deci=dec;
	nul=dec-deci;
	decn=dec;
	for(i=0;decn>0;i++)
	{
	decn=decn/8;
	}
	decn=dec;
	for(j=i-1;j>=0;j--)
	{
		bi[j]=deci%8;
		deci=deci/8;
	}
	printf ("%.2f base 10 :: ",dec);
	for(j=0;j<i;j++)
	{
		printf("%ld",bi[j]);
	}
	printf(".");
	for(j=0;j<4;j++)
	{
		nul=nul*8;
		af[j]=nul;
		printf("%ld",af[j]);
		nul=nul-af[j];
	}
	printf(" base 8.\n");
}

void d2duo(float dec)
{
	float nul;
	long int i,j,decn,count=0, af[4],deci,div=1234,ch;
	int bi[100];
	char dn[100],aff[4];
	deci=dec;
	nul=dec-deci;
	decn=dec;
	for(i=0;decn>0;i++)
	{
	decn=decn/12;
	}
	decn=dec;
	for(j=i-1;j>=0;j--)
	{
		if (deci%12==10)
		{
		dn[j]='A';
		bi[j]='\0';
		}
		else if (deci%12==11)
		{
		dn[j]='B';
		bi[j]='\0';
		}
		else
		{
		dn[j]='\0';
		bi[j]=deci%12;
		}
		deci=deci/12;
	}
	printf ("%.2f base 10 :: ",dec);
	
	for(j=0;j<i;j++)
	{
		if(dn[j]!='\0')
		{
			printf("%c",dn[j]);
		}
		else
		printf("%ld",bi[j]);
	}
	printf(".");
	for(j=0;j<4;j++)
	{
		nul=nul*12;
		af[j]=nul;
		if(af[j]==10)
			{
			aff[j]='A';
			af[j]='\0';
			}
		else if (af[j]==11)
			{
			aff[j]='B';
			af[j]='\0';
			}
		else
			{
			af[j]=nul;
			aff[j]='\0';
			}
		nul=nul-af[j];
	}
	for(j=0;j<4;j++)
	{
		if(aff[j]!='\0')
		printf("%c",aff[j]);
		else
		printf("%ld",af[j]);
	}
	printf(" base 12.\n");
}

void d2hex(float deci)
{
	float nul;
	long int i,j,decn,count=0, af[4],dec,div=1234,ch;
	int bi[100];
	char dn[100], aff[4];
	dec=deci;
	nul=deci-dec;
	decn=deci;
	for(i=0;decn>0;i++)
	{
	decn=decn/16;
	}
	decn=deci;
	for(j=i-1;j>=0;j--)
	{
		if(dec%16==10)
		{
			dn[j]='A';
			bi[j]='\0';
		}
		
		else if(dec%16==11)
		{
			dn[j]='B';
			bi[j]='\0';
		}
		
		else if(dec%16==12)
		{
			dn[j]='C';
			bi[j]='\0';
		}
		
		else if(dec%16==13)
		{
			dn[j]='D';
			bi[j]='\0';
		}
		else if(dec%16==14)
		{
			dn[j]='E';
			bi[j]='\0';
		}
		else if(dec%16==15)
		{
			dn[j]='F';
			bi[j]='\0';
		}
		else 
		{
		bi[j]=dec%16;
		dn[j]='\0';
		}
		dec=dec/16;
	}
	printf ("%.2f base 10 :: ",deci);
	for(j=0;j<i;j++)
	{
		if(dn[j]!='\0')
		printf("%c",dn[j]);
		else
		printf("%ld",bi[j]);
	}
	printf(".");
	for(j=0;j<4;j++)
	{
		nul=nul*16;
		af[j]=nul;
		if(af[j]==10)
			{
			aff[j]='A';
			af[j]='\0';
			}
		else if (af[j]==11)
			{
			aff[j]='B';
			af[j]='\0';
			}
		else if (af[j]==12)
			{
			aff[j]='C';
			af[j]='\0';
			}
		else if (af[j]==13)
			{
			aff[j]='D';
			af[j]='\0';
			}
			
		else if (af[j]==14)
			{
			aff[j]='E';
			af[j]='\0';
			}
			
		else if (af[j]==15)
			{
			aff[j]='F';
			af[j]='\0';
			}
		else
			{
			af[j]=nul;
			aff[j]='\0';
			}
		nul=nul-af[j];
	}
	for(j=0;j<2;j++)
	{
		if(aff[j]!='\0')
		printf("%c",aff[j]);
		else
		printf("%ld",af[j]);
	}
	printf(" base 16.\n");
}
