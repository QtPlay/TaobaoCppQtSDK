#ifndef LIMITDISCOUNTDETAIL_H
#define LIMITDISCOUNTDETAIL_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 限时打折详情
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class LimitDiscountDetail : public TaoDomain
{

public:
 virtual ~LimitDiscountDetail() { }

  QDateTime getEndTime() const;
  void setEndTime (QDateTime endTime);
  QString getItemDiscount() const;
  void setItemDiscount (QString itemDiscount);
  qlonglong getItemId() const;
  void setItemId (qlonglong itemId);
  QString getLimitDiscountName() const;
  void setLimitDiscountName (QString limitDiscountName);
  qlonglong getLimitNum() const;
  void setLimitNum (qlonglong limitNum);
  QDateTime getStartTime() const;
  void setStartTime (QDateTime startTime);
  
  virtual void parseResponse();

private:
/**
 * @brief 限时打折结束时间。
 **/
  QDateTime endTime;

/**
 * @brief 该商品限时折扣
 **/
  QString itemDiscount;

/**
 * @brief 商品的id(数字类型)
 **/
  qlonglong itemId;

/**
 * @brief 限时打折名称
 **/
  QString limitDiscountName;

/**
 * @brief 每人限购数量，1、2、5、10000(不限)。
 **/
  qlonglong limitNum;

/**
 * @brief 限时打折开始时间。
 **/
  QDateTime startTime;

};

#endif  /* LIMITDISCOUNTDETAIL_H */
