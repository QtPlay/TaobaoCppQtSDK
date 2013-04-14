#ifndef FENXIAODISCOUNTADDREQUEST_H
#define FENXIAODISCOUNTADDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/FenxiaoDiscountAddResponse.h>

/**
 * TOP API: 新增等级折扣
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoDiscountAddRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getDiscountName() const
;  void setDiscountName (QString discountName);

 QString getDiscountTypes() const
;  void setDiscountTypes (QString discountTypes);

 QString getDiscountValues() const
;  void setDiscountValues (QString discountValues);

 QString getTargetIds() const
;  void setTargetIds (QString targetIds);

 QString getTargetTypes() const
;  void setTargetTypes (QString targetTypes);


  virtual FenxiaoDiscountAddResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 折扣名称,长度不能超过25字节
 **/
  QString discountName;

/**
 * @brief PERCENT（按折扣优惠）、PRICE（按减价优惠），例如"PERCENT,PRICE,PERCENT"
 **/
  QString discountTypes;

/**
 * @brief 优惠比率或者优惠价格，例如：”8000,-2300,7000”,大小为-100000000到100000000之间（单位：分）
 **/
  QString discountValues;

/**
 * @brief 会员等级的id或者分销商id，例如：”1001,2001,1002”
 **/
  QString targetIds;

/**
 * @brief GRADE（按会员等级优惠）、DISTRIBUTOR（按分销商优惠），例如"GRADE,DISTRIBUTOR"
 **/
  QString targetTypes;

};

#endif  /* FENXIAODISCOUNTADDREQUEST_H */
