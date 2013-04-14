#ifndef FENXIAODISCOUNTUPDATEREQUEST_H
#define FENXIAODISCOUNTUPDATEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/FenxiaoDiscountUpdateResponse.h>

/**
 * TOP API: 修改等级折扣
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoDiscountUpdateRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getDetailIds() const
;  void setDetailIds (QString detailIds);

 QString getDetailStatuss() const
;  void setDetailStatuss (QString detailStatuss);

 qlonglong getDiscountId() const
;  void setDiscountId (qlonglong discountId);

 QString getDiscountName() const
;  void setDiscountName (QString discountName);

 QString getDiscountStatus() const
;  void setDiscountStatus (QString discountStatus);

 QString getDiscountTypes() const
;  void setDiscountTypes (QString discountTypes);

 QString getDiscountValues() const
;  void setDiscountValues (QString discountValues);

 QString getTargetIds() const
;  void setTargetIds (QString targetIds);

 QString getTargetTypes() const
;  void setTargetTypes (QString targetTypes);


  virtual FenxiaoDiscountUpdateResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 详情ID，例如：”0,1002,1003”
 **/
  QString detailIds;

/**
 * @brief ADD(新增)、UPDATE（更新）、DEL（删除，对应的target_type等信息填NULL），例如：”UPDATE,DEL,DEL”
 **/
  QString detailStatuss;

/**
 * @brief 折扣ID
 **/
  qlonglong discountId;

/**
 * @brief 折扣名称，长度不能超过25字节
 **/
  QString discountName;

/**
 * @brief 状态DEL（删除）UPDATE(更新)
 **/
  QString discountStatus;

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

#endif  /* FENXIAODISCOUNTUPDATEREQUEST_H */
