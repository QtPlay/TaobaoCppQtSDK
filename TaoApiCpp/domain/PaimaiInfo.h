#ifndef PAIMAIINFO_H
#define PAIMAIINFO_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 拍卖商品相关信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PaimaiInfo : public TaoDomain
{

public:
 virtual ~PaimaiInfo() { }

  qlonglong getDeposit() const;
  void setDeposit (qlonglong deposit);
  qlonglong getInterval() const;
  void setInterval (qlonglong interval);
  qlonglong getMode() const;
  void setMode (qlonglong mode);
  QString getReserve() const;
  void setReserve (QString reserve);
  qlonglong getValidHour() const;
  void setValidHour (qlonglong validHour);
  qlonglong getValidMinute() const;
  void setValidMinute (qlonglong validMinute);
  
  virtual void parseResponse();

private:
/**
 * @brief 用户自定义的固定保证金。如果用户未传则说明用户选择使用淘宝默认的保证金模式10%，此时deposit等于0.
 **/
  qlonglong deposit;

/**
 * @brief 降价拍中的降价间隔
 **/
  qlonglong interval;

/**
 * @brief 拍卖类型，目前包括增加拍，荷兰拍和降价拍。
 **/
  qlonglong mode;

/**
 * @brief 降价拍的保留价
 **/
  QString reserve;

/**
 * @brief 对于拍卖来说可以设定有效期，这里是有效期的小时数。
 **/
  qlonglong validHour;

/**
 * @brief 对于拍卖来说可以设定有效期，这里是有效期的分钟数。
 **/
  qlonglong validMinute;

};

#endif  /* PAIMAIINFO_H */
