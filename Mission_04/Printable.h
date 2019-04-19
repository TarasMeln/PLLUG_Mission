#pragma once

class Printable {

public:

	virtual ~Printable() = default;
	virtual void print() const = 0;
};