     List defineMethod:                   #--  define a method
     [ | quintile: block1 by: block2 |    #--  needing to blocks
     
       !quintileList <- ^self             #-- ^self is recipient list
          quintileUp: block1 .
          extendBy: [ !quintile1 <- quintile ] .
          quintileUp: block2 .
          extendBy: [ !quintile2 <- quintile ] ;
     
       quintileList groupedBy: [ quintile1 ] . 
          sortUp: [ ^self ] .
       do: [ ^my block1 print ; 
             " Quintile " print ; 
             ^self print: 3 ;
             newLine print ; 
             !block2 <- ^my block2 ;
             5 sequence 
             do: [ !q <- ^self ; 
                   ^my block2 print ; 
                   " Quintile " print ; 
                   q print: 3 ;
                   " Includes: " print ;
                   ^my groupList
                      select: [ quintile2 = ^my q ] . count print: 5 ;
                   " Elements" printNL ; 
                 ] ;
             newLine print ; 
           ] ;
     ] ;
     
     #--  Run the Method
     Company masterList quintile: [sales] by: [ netIncome ] ;



