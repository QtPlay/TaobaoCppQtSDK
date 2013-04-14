#ifndef DISCOUNT_H
#define DISCOUNT_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QList>
#include <QString>
#include <TaoApiCpp/domain/DiscountDetail.h>


/**
 * @brief 折扣信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class Discount : public TaoDomain
{

public:
 virtual ~Discount() { }

  QDateTime getCreated() const;
  void setCreated (QDateTime created);
  QList<DiscountDetail> getDetails() const;
  void setDetails (QList<DiscountDetail> details);
  qlonglong getDiscountId() const;
  void setDiscountId (qlonglong discountId);
  QDateTime getModified() const;
  void setModified (QDateTime modified);
  QString getName() const;
  void setName (QString name);
  
  virtual void parseResponse();

private:
/**
 * @brief 创建时间
 **/
  QDateTime created;

/**
 * @brief 折扣详情
 **/
  QList<DiscountDetail> details;

/**
 * @brief 折扣ID
 **/
  qlonglong discountId;

/**
 * @brief 修改时间
 **/
  QDateTime modified;

/**
 * @brief 折扣名称
 **/
  QString name;

};

#endif  /* DISCOUNT_H */
