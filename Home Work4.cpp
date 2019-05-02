//
//  main.cpp
//  Home Work 4
//
//  Created by Ho Tsung Kai on 2019/3/21.
//  Copyright © 2019 Ho Tsung Kai. All rights reserved.
//

#include <iostream>

int main(void)
{
    int h , m , s , si , m2 , s2 ;
    printf("請輸入秒數：");
    scanf("%d",&si);
    s = si % 60;
    s2 = si / 60;
    m = s2 % 60;
    m2 = s2 / 60;
    h = m2 % 60;
    printf(" %d 時： %d 分： %d 秒\n" , h , m , s );
    return 0;
}
