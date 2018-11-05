class myexception: public exception
{
  virtual const char* what() const throw()
  {
    return "Delta mniejsza od zera";
  }
};
