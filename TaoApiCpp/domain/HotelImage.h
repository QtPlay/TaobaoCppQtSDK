#ifndef HOTELIMAGE_H
#define HOTELIMAGE_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 酒店图片
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelImage : public TaoDomain
{

public:
 virtual ~HotelImage() { }

  qlonglong getHid() const;
  void setHid (qlonglong hid);
  QString getPic() const;
  void setPic (QString pic);
  
  virtual void parseResponse();

private:
/**
 * @brief 酒店id
 **/
  qlonglong hid;

/**
 * @brief 图片地址链接
 **/
  QString pic;

};

#endif  /* HOTELIMAGE_H */
