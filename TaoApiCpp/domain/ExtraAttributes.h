#ifndef EXTRAATTRIBUTES_H
#define EXTRAATTRIBUTES_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 直通车商品对象属性（Map）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ExtraAttributes : public TaoDomain
{

public:
 virtual ~ExtraAttributes() { }

  QDateTime getPublishTime() const;
  void setPublishTime (QDateTime publishTime);
  QString getQuantity() const;
  void setQuantity (QString quantity);
  QString getSalesCount() const;
  void setSalesCount (QString salesCount);
  
  virtual void parseResponse();

private:
/**
 * @brief 商品在淘宝的发布时间
 **/
  QDateTime publishTime;

/**
 * @brief 库存数量
 **/
  QString quantity;

/**
 * @brief 商品的累积销量
 **/
  QString salesCount;

};

#endif  /* EXTRAATTRIBUTES_H */
