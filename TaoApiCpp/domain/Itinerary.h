#ifndef ITINERARY_H
#define ITINERARY_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 国内机票行程单数据结构定义【top订单优化】
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class Itinerary : public TaoDomain
{

public:
 virtual ~Itinerary() { }

  QString getAddress() const;
  void setAddress (QString address);
  QString getAlipayTradeNo() const;
  void setAlipayTradeNo (QString alipayTradeNo);
  QString getCompanyCode() const;
  void setCompanyCode (QString companyCode);
  QString getExpressCode() const;
  void setExpressCode (QString expressCode);
  QString getExtra() const;
  void setExtra (QString extra);
  qlonglong getId() const;
  void setId (qlonglong id);
  QString getItineraryNo() const;
  void setItineraryNo (QString itineraryNo);
  QString getMobile() const;
  void setMobile (QString mobile);
  QString getMobileBak() const;
  void setMobileBak (QString mobileBak);
  QString getName() const;
  void setName (QString name);
  QString getPrice() const;
  void setPrice (QString price);
  QString getSendDate() const;
  void setSendDate (QString sendDate);
  qlonglong getStatus() const;
  void setStatus (qlonglong status);
  qlonglong getType() const;
  void setType (qlonglong type);
  
  virtual void parseResponse();

private:
/**
 * @brief 收件人地址
 **/
  QString address;

/**
 * @brief 支付宝交易号
 **/
  QString alipayTradeNo;

/**
 * @brief 物流公司代码
 **/
  QString companyCode;

/**
 * @brief 邮寄单号
 **/
  QString expressCode;

/**
 * @brief 扩展字段
 **/
  QString extra;

/**
 * @brief 淘宝主键id
 **/
  qlonglong id;

/**
 * @brief 行程单号
 **/
  QString itineraryNo;

/**
 * @brief 收件人手机号
 **/
  QString mobile;

/**
 * @brief 收件人备用手机号
 **/
  QString mobileBak;

/**
 * @brief 收件人姓名
 **/
  QString name;

/**
 * @brief 行程单价格，单位：分
 **/
  QString price;

/**
 * @brief 邮寄时间
 **/
  QString sendDate;

/**
 * @brief 行程单订单的状态 0：未付款 1：已付款 2：转交易成功 3：已邮寄 4：已取消
 **/
  qlonglong status;

/**
 * @brief 行程单类型：6，快递
 **/
  qlonglong type;

};

#endif  /* ITINERARY_H */
