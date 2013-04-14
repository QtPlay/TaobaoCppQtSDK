#ifndef FENXIAOORDERCREATEDEALERREQUEST_H
#define FENXIAOORDERCREATEDEALERREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/FenxiaoOrderCreateDealerResponse.h>

/**
 * TOP API: 分销商创建经销采购单.
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoOrderCreateDealerRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getAddr() const
;  void setAddr (QString addr);

 QString getBuyerName() const
;  void setBuyerName (QString buyerName);

 QString getCity() const
;  void setCity (QString city);

 QString getCountry() const
;  void setCountry (QString country);

 qlonglong getLogisticFee() const
;  void setLogisticFee (qlonglong logisticFee);

 QString getLogisticType() const
;  void setLogisticType (QString logisticType);

 QString getMessage() const
;  void setMessage (QString message);

 QString getMobilePhone() const
;  void setMobilePhone (QString mobilePhone);

 qlonglong getOuterId() const
;  void setOuterId (qlonglong outerId);

 QString getPayType() const
;  void setPayType (QString payType);

 QString getPhone() const
;  void setPhone (QString phone);

 QString getProvince() const
;  void setProvince (QString province);

 QString getSubOrderDetail() const
;  void setSubOrderDetail (QString subOrderDetail);

 QString getZipCode() const
;  void setZipCode (QString zipCode);


  virtual FenxiaoOrderCreateDealerResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 街道
 **/
  QString addr;

/**
 * @brief 买家姓名
 **/
  QString buyerName;

/**
 * @brief 市
 **/
  QString city;

/**
 * @brief 区
 **/
  QString country;

/**
 * @brief 运费，单位为分
 **/
  qlonglong logisticFee;

/**
 * @brief 运输方式，快递,平邮等
 **/
  QString logisticType;

/**
 * @brief 留言
 **/
  QString message;

/**
 * @brief 买家手机号码和电话号码两者中必须有一个
 **/
  QString mobilePhone;

/**
 * @brief erp主订单号，用于去重。当传入号已存在将返回原来的采购单
 **/
  qlonglong outerId;

/**
 * @brief 支付类型,需要供应支持该支付类型
 **/
  QString payType;

/**
 * @brief 买家电话号码
 **/
  QString phone;

/**
 * @brief 省
 **/
  QString province;

/**
 * @brief 子单信息,子单内部以‘,’隔开，多个子单以‘;’隔开. 
例(分销产品id,skuid,购买数量,单价;分销产品id:,skuid,购买数量,单价) 
单价的单位位分
 **/
  QString subOrderDetail;

/**
 * @brief 邮编
 **/
  QString zipCode;

};

#endif  /* FENXIAOORDERCREATEDEALERREQUEST_H */
