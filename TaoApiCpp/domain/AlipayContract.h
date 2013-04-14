#ifndef ALIPAYCONTRACT_H
#define ALIPAYCONTRACT_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 用户订购信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class AlipayContract : public TaoDomain
{

public:
 virtual ~AlipayContract() { }

  QString getAlipayUserId() const;
  void setAlipayUserId (QString alipayUserId);
  QString getContractContent() const;
  void setContractContent (QString contractContent);
  QDateTime getEndTime() const;
  void setEndTime (QDateTime endTime);
  QString getPageUrl() const;
  void setPageUrl (QString pageUrl);
  QDateTime getStartTime() const;
  void setStartTime (QDateTime startTime);
  bool getSubscribe() const;
  void setSubscribe (bool subscribe);
  
  virtual void parseResponse();

private:
/**
 * @brief 支付宝用户ID
 **/
  QString alipayUserId;

/**
 * @brief 订购的应用名称，有效时间。
 **/
  QString contractContent;

/**
 * @brief 订购的失效时间
 **/
  QDateTime endTime;

/**
 * @brief 订购URL。在sign返回false时返回应用的订购地址，可以引导用户订购。
 **/
  QString pageUrl;

/**
 * @brief 订购的生效时间
 **/
  QDateTime startTime;

/**
 * @brief 是否订购的标识。true：代表已订购。
 **/
  bool subscribe;

};

#endif  /* ALIPAYCONTRACT_H */
