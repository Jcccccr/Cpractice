#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int A;
	int B;
	int C;
	int D;
	int E;
	for (A = 1; A <= 5; A++)
	{ 
		for (B = 1; B <= 5; B++)
		{
			if (B != A)
			{
				for (C = 1; C <= 5; C++)
				{
					if ((C != A) && (C != B))
					{

						for (D = 1; D <= 5; D++)
						{
							if ((D != A) && (D != B) && (D != C))
						  {
							
								for (E = 1; E <= 5; E++)
								{
									if ((E != A) && (E != B) && (E != C) && (E != D))
								   {
									
										if (((B == 1 || A == 3) == 1) && ((B == 1 && A == 3) == 0) &&
											((B == 2 || E == 4) == 1) && ((B == 2 && E == 4) == 0) &&
											((C == 1 || D == 2) == 1) && ((C == 1 && D == 2) == 0) &&
											((C == 5 || D == 3) == 1) && ((C == 5 && D == 3) == 0) &&
											((E == 4 || A == 1) == 1) && ((E == 4 && A == 1) == 0))
										{
											printf("%d %d %d %d %d\n", A, B, C, D, E);
										}
									}
								}
							}
						}
					}
				}
			}
		}    
	}        
	system("pause");
return 0;
}