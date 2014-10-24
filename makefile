OBJS = CAccount.o CBank.o CCurrentAccount.o CCustomer.o CIndividualCustomer.o CPassbookSavingsAccount.o CProfessionalCustomer.o CSavingsAccount.o CTimeDepositAccount.o main.o
CC = g++
CFLAGS = -Wall -c
LFLAGS = -Wall 
EXE = bank

$(EXE) : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o $(EXE)

main.o : main.cpp
	$(CC) $(CFLAGS) main.cpp

CAccount.o : CAccount.cpp CAccount.h
	$(CC) $(CFLAGS) CAccount.cpp

CCustomer.o : CCustomer.cpp CCustomer.h
	$(CC) $(CFLAGS) CCustomer.cpp

CCurrentAccount.o : CCurrentAccount.h CCurrentAccount.cpp CAccount.h CAccount.cpp
	$(CC) $(CFLAGS) CCurrentAccount.cpp

CSavingsAccount.o : CSavingsAccount.h CSavingsAccount.cpp CAccount.h CAccount.cpp
	$(CC) $(CFLAGS) CSavingsAccount.cpp

CPassbookSavingsAccount.o : CPassbookSavingsAccount.h CPassbookSavingsAccount.cpp CSavingsAccount.h CSavingsAccount.cpp CAccount.h CAccount.cpp
	$(CC) $(CFLAGS) CPassbookSavingsAccount.cpp

CTimeDepositAccount.o : CTimeDepositAccount.h CTimeDepositAccount.cpp CSavingsAccount.h CSavingsAccount.cpp CAccount.h CAccount.cpp
	$(CC) $(CFLAGS) CTimeDepositAccount.cpp

CIndividualCustomer.o : CIndividualCustomer.h CIndividualCustomer.cpp CCustomer.h CCustomer.cpp
	$(CC) $(CFLAGS) CIndividualCustomer.cpp

CProfessionalCustomer.o : CProfessionalCustomer.h CProfessionalCustomer.cpp CCustomer.h CCustomer.cpp
	$(CC) $(CFLAGS) CProfessionalCustomer.cpp

CBank.o : CBank.h CBank.cpp
	$(CC) $(CFLAGS) CBank.cpp


clean :
	\rm *.o $(EXE)

