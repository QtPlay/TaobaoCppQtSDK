#ifndef LIMITDISCOUNT_H
#define LIMITDISCOUNT_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 限时打折
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class LimitDiscount : public TaoDomain
{

public:
 virtual ~LimitDiscount() { }

  QDateTime getEndTime() const;
  void setEndTime (QDateTime endTime);
  qlonglong getItemNum() const;
  void setItemNum (qlonglong itemNum);
  qlonglong getLimitDiscountId() const;
  void setLimitDiscountId (qlonglong limitDiscountId);
  QString getLimitDiscountName() const;
  void setLimitDiscountName (QString limitDiscountName);
  QDateTime getStartTime() const;
  void setStartTime (QDateTime startTime);
  
  virtual void parseResponse();

private:
/**
 * @brief 限时打折结束时间。
 **/
  QDateTime endTime;

/**
 * @brief 该限时打折宝贝数量。
 **/
  qlonglong itemNum;

/**
 * @brief 限时打折ID。
 **/
  qlonglong limitDiscountId;

/**
 * @brief 限时打折名称。
 **/
  QString limitDiscountName;

/**
 * @brief 限时打折开始时间。
 **/
  QDateTime startTime;

};

#endif  /* LIMITDISCOUNT_H */
