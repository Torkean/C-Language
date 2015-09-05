else if(ch == '\"')
{
    pos = 0;
    kcn = KEY_NUM +24;
    output << kcn << " " << ch <<endl;
    
    while(readin.get(ch)){
        if(ch != '\'' && ch != '\"'){
            if(pos < 49) tword[pos++] =ch;
        }
        else break;
    }
    towrd[pos] = 0;
    word = string(tword);
    kcn = KEY_NUM +1;			//Make double quotation mark content identfity become string
    output << kcn << " " << word <<endl; //Output the string

    if(ch == '\"'){
        kcn = KEY_NUM + 24;
        output << kcn << " " << ch <<endl;
    }
    else{
        kcn = -1;
        output << kcn << " " << ch <<endl;
    }
    

}
