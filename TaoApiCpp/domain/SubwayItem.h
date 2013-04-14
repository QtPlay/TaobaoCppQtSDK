#ifndef SUBWAYITEM_H
#define SUBWAYITEM_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>
#include <TaoApiCpp/domain/ExtraAttributes.h>


/**
 * @brief 主站商品对象
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SubwayItem : public TaoDomain
{

public:
 virtual ~SubwayItem() { }

  ExtraAttributes getExtraAttributes() const;
  void setExtraAttributes (ExtraAttributes extraAttributes);
  qlonglong getNumId() const;
  void setNumId (qlonglong numId);
  QString getPrice() const;
  void setPrice (QString price);
  QString getTitle() const;
  void setTitle (QString title);
  
  virtual void parseResponse();

private:
/**
 * @brief 扩展属性对象
 **/
  ExtraAttributes extraAttributes;

/**
 * @brief 商品信息在外部系统(淘宝主站)的数字id
 **/
  qlonglong numId;

/**
 * @brief 商品信息在外部系统（淘宝主站）的价格
 **/
  QString price;

/**
 * @brief 商品信息在外部系统（淘宝主站）的标题
 **/
  QString title;

};

#endif  /* SUBWAYITEM_H */
