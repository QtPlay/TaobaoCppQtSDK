#ifndef COLLECTITEM_H
#define COLLECTITEM_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 商品或店铺的信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class CollectItem : public TaoDomain
{

public:
 virtual ~CollectItem() { }

  qlonglong getItemNumid() const;
  void setItemNumid (qlonglong itemNumid);
  QString getItemOwnerNick() const;
  void setItemOwnerNick (QString itemOwnerNick);
  QString getTitle() const;
  void setTitle (QString title);
  
  virtual void parseResponse();

private:
/**
 * @brief 商品或店铺的id号
 **/
  qlonglong itemNumid;

/**
 * @brief 被收藏宝贝或店铺所有者的昵称
 **/
  QString itemOwnerNick;

/**
 * @brief 收藏目标的标题名字
 **/
  QString title;

};

#endif  /* COLLECTITEM_H */
