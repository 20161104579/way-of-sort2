//
//  way of sort2.c
//  way of sort2
//
//  Created by 20161104579 on 2017/6/16.
//  Copyright © 2017年 20161104579. All rights reserved.
//

#include <stdio.h>
int main()
{
    int n[10],i,j,a;
    FILE *fi;
    FILE *fo;
    fi=fopen("/Users/a20161104579/Library/Mobile Documents/com~apple~TextEdit/Documents/way of sort2in.txt","r");
    fo=fopen("/Users/a20161104579/Library/Mobile Documents/com~apple~TextEdit/Documents/way of sort2out.txt","w");
    if(fi==NULL)
    {
        printf("error");
        return 1;
    }
    else
    {
        for(i=0;i<10;i++)
        {
            fscanf(fi,"%d",&n[i]);
        }
        for(i=0;i<10;i++)
        {
            for(j=0;j<10-i;j++)
            {
                if(n[i]>n[i+j])
                {
                    a=n[i];
                    n[i]=n[i+j];
                    n[i+j]=a;
                }
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d\t",n[i]);
    }
    for(i=0;i<10;i++)
    {
        fprintf(fo,"%d ",n[i]);
    }
    fclose(fi);
    fclose(fo);
    return 0;
}
