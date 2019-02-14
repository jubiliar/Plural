#pragma once
enum Status
{
	Pending,
	Approved,
	Cancelled
};

enum class FileError
{
	notFound,
	ok
};

enum class NetworkError
{
	disconnected,
	ok
};
