#pragma once

#include <string>

struct Message
{
	std::string senderUsername;
	std::string receiverUsername;
	std::string subject;
	std::string body;
	int id = -1;
	bool operator==(const Message &message) const
	{
		return senderUsername == message.senderUsername &&
			receiverUsername == message.receiverUsername &&
			subject == message.subject &&
			body == message.body;
	}
};
