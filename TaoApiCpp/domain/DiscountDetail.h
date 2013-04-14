#ifndef DISCOUNTDETAIL_H
#define DISCOUNTDETAIL_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 折扣详情信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class DiscountDetail : public TaoDomain
{

public:
 virtual ~DiscountDetail() { }

  QDateTime getCreated() const;
  void setCreated (QDateTime created);
  qlonglong getDetailId() const;
  void setDetailId (qlonglong detailId);
  QString getDiscountType() const;
  void setDiscountType (QString discountType);
  qlonglong getDiscountValue() const;
  void setDiscountValue (qlonglong discountValue);
  QDateTime getModified() const;
  void setModified (QDateTime modified);
  qlonglong getTargetId() const;
  void setTargetId (qlonglong targetId);
  QString getTargetName() const;
  void setTargetName (QString targetName);
  QString getTargetType() const;
  void setTargetType (QString targetType);
  
  virtual void parseResponse();

private:
/**
 * @brief 创建时间
 **/
  QDateTime created;

/**
 * @brief 折扣详情ID
 **/
  qlonglong detailId;

/**
 * @brief 优惠方式:PERCENT（按折扣优惠）、PRICE（按减价优惠）
 **/
  QString discountType;

/**
 * @brief 优惠比率或者优惠价格 10%或10
 **/
  qlonglong discountValue;

/**
 * @brief 修改时间
 **/
  QDateTime modified;

/**
 * @brief 会员等级的id或者分销商id
 **/
  qlonglong targetId;

/**
 * @brief 等级名称或者分销商名称
 **/
  QString targetName;

/**
 * @brief 折扣类型:GRADE（按会员等级优惠）、DISTRIBUTOR（按分销商优惠）
 **/
  QString targetType;

};

#endif  /* DISCOUNTDETAIL_H */
