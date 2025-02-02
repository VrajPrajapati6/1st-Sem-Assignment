#include<stdio.h>
//Any day of the year 2024.

int t;
void jan(int m,int d){
    int b=5,c=7,e= -1;
    int a[b][c];
    for(int i=0;i<b;i++){
        for(int j=0;j<c;j++){
            a[i][j]=e; //dates=e.
            e++;
        }
    }

    for(int i=0;i<b;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]==d){
                t=j+1;
            }
        }
    }
}

void feb(int m,int d){
    int b=5,c=7,e= -4;
    int a[b][c];
    for(int i=0;i<b;i++){
        for(int j=0;j<c;j++){
            a[i][j]=e; //dates=e.
            e++;
        }
    }

    for(int i=0;i<b;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]==d){
                t=j+1;
            }
        }
    }
}

void march(int m,int d){
    int b=6,c=7,e= -4;
    int a[b][c];
    for(int i=0;i<b;i++){
        for(int j=0;j<c;j++){
            a[i][j]=e; //dates=e.
            e++;
        }
    }

    for(int i=0;i<b;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]==d){
                t=j+1;
            }
        }
    }
}

void april(int m,int d){
    int b=5,c=7,e= 0;
    int a[b][c];
    for(int i=0;i<b;i++){
        for(int j=0;j<c;j++){
            a[i][j]=e; //dates=e.
            e++;
        }
    }

    for(int i=0;i<b;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]==d){
                t=j+1;
            }
        }
    }
}

void may(int m,int d){
    int b=5,c=7,e= -2;
    int a[b][c];
    for(int i=0;i<b;i++){
        for(int j=0;j<c;j++){
            a[i][j]=e; //dates=e.
            e++;
        }
    }

    for(int i=0;i<b;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]==d){
                t=j+1;
            }
        }
    }
}

void june(int m,int d){
    int b=6,c=7,e= -5;
    int a[b][c];
    for(int i=0;i<b;i++){
        for(int j=0;j<c;j++){
            a[i][j]=e; //dates=e.
            e++;
        }
    }

    for(int i=0;i<b;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]==d){
                t=j+1;
            }
        }
    }
}

void july(int m,int d){
    int b=5,c=7,e= 0;
    int a[b][c];
    for(int i=0;i<b;i++){
        for(int j=0;j<c;j++){
            a[i][j]=e; //dates=e.
            e++;
        }
    }

    for(int i=0;i<b;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]==d){
                t=j+1;
            }
        }
    }
}

void august(int m,int d){
    int b=5,c=7,e= -3;
    int a[b][c];
    for(int i=0;i<b;i++){
        for(int j=0;j<c;j++){
            a[i][j]=e; //dates=e.
            e++;
        }
    }

    for(int i=0;i<b;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]==d){
                t=j+1;
            }
        }
    }
}

void september(int m,int d){
    int b=5,c=7,e= 1;
    int a[b][c];
    for(int i=0;i<b;i++){
        for(int j=0;j<c;j++){
            a[i][j]=e; //dates=e.
            e++;
        }
    }

    for(int i=0;i<b;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]==d){
                t=j+1;
            }
        }
    }
}

void october(int m,int d){
    int b=5,c=7,e= -1;
    int a[b][c];
    for(int i=0;i<b;i++){
        for(int j=0;j<c;j++){
            a[i][j]=e; //dates=e.
            e++;
        }
    }

    for(int i=0;i<b;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]==d){
                t=j+1;
            }
        }
    }
}

void november(int m,int d){
    int b=6,c=7,e= -4;
    int a[b][c];
    for(int i=0;i<b;i++){
        for(int j=0;j<c;j++){
            a[i][j]=e; //dates=e.
            e++;
        }
    }

    for(int i=0;i<b;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]==d){
                t=j+1;
            }
        }
    }
}

void december(int m,int d){
    int b=5,c=7,e= 1;
    int a[b][c];
    for(int i=0;i<b;i++){
        for(int j=0;j<c;j++){
            a[i][j]=e; //dates=e.
            e++;
        }
    }

    for(int i=0;i<b;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]==d){
                t=j+1;
            }
        }
    }
}

int main()
{
  int month,date;
  printf("Enter a month:");
  scanf("%d",&month);
  printf("Enter any date of the month:");
  scanf("%d",&date);

  switch(month){
    case 1:
     jan(month,date);
     switch(t){
        case 1:
        printf("The day in the following month and date is MONDAY",date,month);
        break;

        case 2:
        printf("The day in the following month and date %d is TUESDAY",date);
        break;
        
        case 3:
        printf("The day in the following month and date %d is WEDNESDAY",date);
        break;

        case 4:
        printf("The day in the following month and date %d is THURSDAY",date);
        break;

        case 5:
        printf("The day in the following month and date %d is FRIDAY",date);
        break;

        case 6:
        printf("The day in the following month and date %d is SATURDAY",date);
        break;

        case 7:
        printf("The day in the following month and date %d is SUNDAY",date);
        break;

        default:
        printf("Wrong number.");
     }
     break;

    case 2:
     feb(month,date);
     switch(t){
        case 1:
        printf("The day in the following month and date is MONDAY",date,month);
        break;

        case 2:
        printf("The day in the following month and date %d is TUESDAY",date);
        break;
        
        case 3:
        printf("The day in the following month and date %d is WEDNESDAY",date);
        break;

        case 4:
        printf("The day in the following month and date %d is THURSDAY",date);
        break;

        case 5:
        printf("The day in the following month and date %d is FRIDAY",date);
        break;

        case 6:
        printf("The day in the following month and date %d is SATURDAY",date);
        break;

        case 7:
        printf("The day in the following month and date %d is SUNDAY",date);
        break;

        default:
        printf("Wrong number.");
     }
     break;

    case 3:
     march(month,date);
     switch(t){
        case 1:
        printf("The day in the following month and date is MONDAY",date,month);
        break;

        case 2:
        printf("The day in the following month and date %d is TUESDAY",date);
        break;
        
        case 3:
        printf("The day in the following month and date %d is WEDNESDAY",date);
        break;

        case 4:
        printf("The day in the following month and date %d is THURSDAY",date);
        break;

        case 5:
        printf("The day in the following month and date %d is FRIDAY",date);
        break;

        case 6:
        printf("The day in the following month and date %d is SATURDAY",date);
        break;

        case 7:
        printf("The day in the following month and date %d is SUNDAY",date);
        break;

        default:
        printf("Wrong number.");
     }
     break;

    case 4:
     april(month,date);
     switch(t){
        case 1:
        printf("The day in the following month and date is MONDAY",date,month);
        break;

        case 2:
        printf("The day in the following month and date %d is TUESDAY",date);
        break;
        
        case 3:
        printf("The day in the following month and date %d is WEDNESDAY",date);
        break;

        case 4:
        printf("The day in the following month and date %d is THURSDAY",date);
        break;

        case 5:
        printf("The day in the following month and date %d is FRIDAY",date);
        break;

        case 6:
        printf("The day in the following month and date %d is SATURDAY",date);
        break;

        case 7:
        printf("The day in the following month and date %d is SUNDAY",date);
        break;

        default:
        printf("Wrong number.");
     }
     break;

    case 5:
     may(month,date);
     switch(t){
        case 1:
        printf("The day in the following month and date is MONDAY",date,month);
        break;

        case 2:
        printf("The day in the following month and date %d is TUESDAY",date);
        break;
        
        case 3:
        printf("The day in the following month and date %d is WEDNESDAY",date);
        break;

        case 4:
        printf("The day in the following month and date %d is THURSDAY",date);
        break;

        case 5:
        printf("The day in the following month and date %d is FRIDAY",date);
        break;

        case 6:
        printf("The day in the following month and date %d is SATURDAY",date);
        break;

        case 7:
        printf("The day in the following month and date %d is SUNDAY",date);
        break;

        default:
        printf("Wrong number.");
     }
     break;

    case 6:
     june(month,date);
     switch(t){
        case 1:
        printf("The day in the following month and date is MONDAY",date,month);
        break;

        case 2:
        printf("The day in the following month and date %d is TUESDAY",date);
        break;
        
        case 3:
        printf("The day in the following month and date %d is WEDNESDAY",date);
        break;

        case 4:
        printf("The day in the following month and date %d is THURSDAY",date);
        break;

        case 5:
        printf("The day in the following month and date %d is FRIDAY",date);
        break;

        case 6:
        printf("The day in the following month and date %d is SATURDAY",date);
        break;

        case 7:
        printf("The day in the following month and date %d is SUNDAY",date);
        break;

        default:
        printf("Wrong number.");
     }
     break;

    case 7:
     july(month,date);
     switch(t){
        case 1:
        printf("The day in the following month and date is MONDAY",date,month);
        break;

        case 2:
        printf("The day in the following month and date %d is TUESDAY",date);
        break;
        
        case 3:
        printf("The day in the following month and date %d is WEDNESDAY",date);
        break;

        case 4:
        printf("The day in the following month and date %d is THURSDAY",date);
        break;

        case 5:
        printf("The day in the following month and date %d is FRIDAY",date);
        break;

        case 6:
        printf("The day in the following month and date %d is SATURDAY",date);
        break;

        case 7:
        printf("The day in the following month and date %d is SUNDAY",date);
        break;

        default:
        printf("Wrong number.");
     }
     break;

    case 8:
     august(month,date);
     switch(t){
        case 1:
        printf("The day in the following month and date is MONDAY",date,month);
        break;

        case 2:
        printf("The day in the following month and date %d is TUESDAY",date);
        break;
        
        case 3:
        printf("The day in the following month and date %d is WEDNESDAY",date);
        break;

        case 4:
        printf("The day in the following month and date %d is THURSDAY",date);
        break;

        case 5:
        printf("The day in the following month and date %d is FRIDAY",date);
        break;

        case 6:
        printf("The day in the following month and date %d is SATURDAY",date);
        break;

        case 7:
        printf("The day in the following month and date %d is SUNDAY",date);
        break;

        default:
        printf("Wrong number.");
     }
     break;

    case 9:
     september(month,date);
     switch(t){
        case 1:
        printf("The day in the following month and date is MONDAY",date,month);
        break;

        case 2:
        printf("The day in the following month and date %d is TUESDAY",date);
        break;
        
        case 3:
        printf("The day in the following month and date %d is WEDNESDAY",date);
        break;

        case 4:
        printf("The day in the following month and date %d is THURSDAY",date);
        break;

        case 5:
        printf("The day in the following month and date %d is FRIDAY",date);
        break;

        case 6:
        printf("The day in the following month and date %d is SATURDAY",date);
        break;

        case 7:
        printf("The day in the following month and date %d is SUNDAY",date);
        break;

        default:
        printf("Wrong number.");
     }
     break;

    case 10:
     october(month,date);
     switch(t){
        case 1:
        printf("The day in the following month and date is MONDAY",date,month);
        break;

        case 2:
        printf("The day in the following month and date %d is TUESDAY",date);
        break;
        
        case 3:
        printf("The day in the following month and date %d is WEDNESDAY",date);
        break;

        case 4:
        printf("The day in the following month and date %d is THURSDAY",date);
        break;

        case 5:
        printf("The day in the following month and date %d is FRIDAY",date);
        break;

        case 6:
        printf("The day in the following month and date %d is SATURDAY",date);
        break;

        case 7:
        printf("The day in the following month and date %d is SUNDAY",date);
        break;

        default:
        printf("Wrong number.");
     }
     break;

    case 11:
     november(month,date);
     switch(t){
        case 1:
        printf("The day in the following month and date is MONDAY",date,month);
        break;

        case 2:
        printf("The day in the following month and date %d is TUESDAY",date);
        break;
        
        case 3:
        printf("The day in the following month and date %d is WEDNESDAY",date);
        break;

        case 4:
        printf("The day in the following month and date %d is THURSDAY",date);
        break;

        case 5:
        printf("The day in the following month and date %d is FRIDAY",date);
        break;

        case 6:
        printf("The day in the following month and date %d is SATURDAY",date);
        break;

        case 7:
        printf("The day in the following month and date %d is SUNDAY",date);
        break;

        default:
        printf("Wrong number.");
     }
     break;

      case 12:
     december(month,date);
     switch(t){
        case 1:
        printf("The day in the following month and date is MONDAY",date,month);
        break;

        case 2:
        printf("The day in the following month and date %d is TUESDAY",date);
        break;
        
        case 3:
        printf("The day in the following month and date %d is WEDNESDAY",date);
        break;

        case 4:
        printf("The day in the following month and date %d is THURSDAY",date);
        break;

        case 5:
        printf("The day in the following month and date %d is FRIDAY",date);
        break;

        case 6:
        printf("The day in the following month and date %d is SATURDAY",date);
        break;

        case 7:
        printf("The day in the following month and date %d is SUNDAY",date);
        break;

        default:
        printf("Wrong number.");
     }
     break;

     default:
     printf("Month does not exist.");
     break; 

  }

  return 0;
}