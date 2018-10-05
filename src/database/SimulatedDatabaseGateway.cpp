#include "SimulatedDatabaseGateway.h"



SimulatedDatabaseGateway::SimulatedDatabaseGateway()
{
}


SimulatedDatabaseGateway::~SimulatedDatabaseGateway()
{
}

void SimulatedDatabaseGateway::insertMessage(const Message & message)
{
	allMessages.push_back(message);
}

void SimulatedDatabaseGateway::DeleteMessage(const Message & message_to_erase)
{

	for (int i = 0; i < allMessages.size(); i++)
	{

		if(allMessages[i] == message_to_erase)
		{
			allMessages.erase(allMessages.begin() + i);
			i--;
		}
	}
}

std::vector<Message> SimulatedDatabaseGateway::getAllMessagesReceivedByUser(const std::string & username)
{
	std::vector<Message> messages;
	for (const auto & message : allMessages)
	{
		if (message.receiverUsername == username)
		{
			messages.push_back(message);
		}
	}
	return messages;
}
