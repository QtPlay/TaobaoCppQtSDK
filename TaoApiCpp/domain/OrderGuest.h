#ifndef ORDERGUEST_H
#define ORDERGUEST_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 酒店订单入住人结构。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class OrderGuest : public TaoDomain
{

public:
 virtual ~OrderGuest() { }

  QString getName() const;
  void setName (QString name);
  qlonglong getOid() const;
  void setOid (qlonglong oid);
  qlonglong getPersonPos() const;
  void setPersonPos (qlonglong personPos);
  qlonglong getRoomPos() const;
  void setRoomPos (qlonglong roomPos);
  QString getTel() const;
  void setTel (QString tel);
  
  virtual void parseResponse();

private:
/**
 * @brief 入住人姓名
 **/
  QString name;

/**
 * @brief 酒店订单id
 **/
  qlonglong oid;

/**
 * @brief 入住人序号
 **/
  qlonglong personPos;

/**
 * @brief 房间序号
 **/
  qlonglong roomPos;

/**
 * @brief 入住人电话
 **/
  QString tel;

};

#endif  /* ORDERGUEST_H */
