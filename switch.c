main()
{
    int opcion;  
    printf ("¿De qué producto quieres el precio?");
    printf ("1. Tortillas");
    printf ("2. Manzanas");
    printf ("3. Refresco");
    printf ("4. garrafón de agua");
    printf ("5. Verdura");


    scanf  ("i", &opcion); 

    switch(opcion)
    {
        case 1:
            printf ("el kg de tortilla vale $21");
            break;
        case 2:
            printf ("el kg de manzana vale $50");
            break;    
        case 3:
            printf ("el refresco de litro $18");
            break;
        case 4:
            printf ("el garrafón de 20lt vale $40"); 
            break;
        case 5:
            printf ("el Kg de verdura mixta vale $30");
            break;      
    }
    prinf ("Gracias por utilzar mi menú, cualquier duda buscar en GOOGLE")
}