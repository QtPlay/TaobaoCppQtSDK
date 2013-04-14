#ifndef CARRIAGEDETAIL_H
#define CARRIAGEDETAIL_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 物流公司资费相关信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class CarriageDetail : public TaoDomain
{

public:
 virtual ~CarriageDetail() { }

  qlonglong getAddFee() const;
  void setAddFee (qlonglong addFee);
  qlonglong getAddWeight() const;
  void setAddWeight (qlonglong addWeight);
  QString getDamagePayment() const;
  void setDamagePayment (QString damagePayment);
  QString getGotTime() const;
  void setGotTime (QString gotTime);
  qlonglong getInitialFee() const;
  void setInitialFee (qlonglong initialFee);
  qlonglong getInitialWeight() const;
  void setInitialWeight (qlonglong initialWeight);
  QString getLostPayment() const;
  void setLostPayment (QString lostPayment);
  QString getWayDay() const;
  void setWayDay (QString wayDay);
  
  virtual void parseResponse();

private:
/**
 * @brief 续费（单位：元）
 **/
  qlonglong addFee;

/**
 * @brief 续重（单位：千克）
 **/
  qlonglong addWeight;

/**
 * @brief 破损赔付
 **/
  QString damagePayment;

/**
 * @brief 物流公司揽收时间段
 **/
  QString gotTime;

/**
 * @brief 首费（单位：元）
 **/
  qlonglong initialFee;

/**
 * @brief 首重（单位：千克）
 **/
  qlonglong initialWeight;

/**
 * @brief 丢单赔付
 **/
  QString lostPayment;

/**
 * @brief 快件送达所需的时间(单位：天)
 **/
  QString wayDay;

};

#endif  /* CARRIAGEDETAIL_H */
