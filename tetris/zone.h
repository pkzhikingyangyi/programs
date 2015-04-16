class CZone
{
public:
  virtual void Paint();
private:
  int m_width;
  int m_height;
};

struct SCoor
{
  int x, y;
};

class CLeftZone : private CZone
{
};

class CRightZone : private CZone
{
};

class CBlock
{
public:
  
private:
  int m_length;
  SCoor m_centerXY;
};

class CGrid : public CZone
{
private:
  bool m_occupied;
  int m_left, m_bottom;
  int m_colorR, m_colorG, m_colorB;
};

class CMiddleZone : private CZone
{
public:
  friend CBlock;
};
