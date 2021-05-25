#include<stdio.h>
int main(){
	char luachon;
	do {
	printf("\n----MENU----\n");
	printf("\n1.  Chon mon an\n2.  Goi do uong\n3.  Thanh toan\n4.  Thoat chuong trinh\n  Vui long chon \n");
    scanf("%d",&luachon);
	  switch(luachon){
	  	case 1:{ 
		        printf("\n1. Com ga\n2. Pho\n3. Bun\n4. Quay lai\n");
	  	         scanf("%d",&luachon);
	  	         switch(luachon){
	  	         	case 1:
	  	         	case 2:
	  	         	case 3:{
	  	         		printf("\nCam on ban da chon mon\n");
						break;
					   }
	  	         	case 4: break;
				   }
			break;
		  }
			
		case 2:{
		 	     printf("\n1.  Nuoc cam\n2.  Nuoc chanh\n3.  Bia\n4.  Quay lai\n");
		 	     scanf("%d",&luachon);
		 	     switch(luachon){
		 	     	case 1:
		 	     	case 2:
		 	     	case 3:{
		 	     		printf("\nCam on da chon do uong\n");
						break;
					}
					  case 4: break;
				  }
				break;  
			}
		case 3:{
			printf("\nHoa don cua ban la 50.000vnd\n");
			printf("Thank you very much");
			break;
		}	
		 case 4:{
			break;
		 }
		  default:
		         printf("\nBan da chon sai moi chon lai\n");
				 break;	
		 
	  } 
	}while(luachon!=4);
	return 0;
}
