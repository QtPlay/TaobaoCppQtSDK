#ifndef NOTIFYITEM_H
#define NOTIFYITEM_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 商品通知消息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class NotifyItem : public TaoDomain
{

public:
 virtual ~NotifyItem() { }

  QString getChangedFields() const;
  void setChangedFields (QString changedFields);
  QString getIid() const;
  void setIid (QString iid);
  qlonglong getIncrement() const;
  void setIncrement (qlonglong increment);
  QDateTime getModified() const;
  void setModified (QDateTime modified);
  QString getNick() const;
  void setNick (QString nick);
  qlonglong getNum() const;
  void setNum (qlonglong num);
  qlonglong getNumIid() const;
  void setNumIid (qlonglong numIid);
  QString getPrice() const;
  void setPrice (QString price);
  qlonglong getSkuId() const;
  void setSkuId (qlonglong skuId);
  qlonglong getSkuNum() const;
  void setSkuNum (qlonglong skuNum);
  QString getStatus() const;
  void setStatus (QString status);
  QString getTitle() const;
  void setTitle (QString title);
  qlonglong getUserId() const;
  void setUserId (qlonglong userId);
  
  virtual void parseResponse();

private:
/**
 * @brief 商品此次操作所变更的字段，以“,”分割，对应于商品Item的字段名称。目前支持title，price，num，item_img，prop_img，location，cid，approve_status， list_time几个字段的更改标记返回，其中“item_img，prop_img”会同时出现表示商品相关图片列表发生了修改
 **/
  QString changedFields;

/**
 * @brief 商品编号(注意：iid近期即将废弃，请用num_iid参数)
 **/
  QString iid;

/**
 * @brief 商品库存的变化量，当商品库存增加时，此值为正数；当商品库存减少时，此值为负数。
 **/
  qlonglong increment;

/**
 * @brief 商品修改时间（格式：yyyy-MM-dd HH:mm:ss）
 **/
  QDateTime modified;

/**
 * @brief 卖家昵称
 **/
  QString nick;

/**
 * @brief 商品数量
 **/
  qlonglong num;

/**
 * @brief 商品数字编号
 **/
  qlonglong numIid;

/**
 * @brief 商品价格，格式：5.00；单位：元；精确到：分
 **/
  QString price;

/**
 * @brief 商品SKU编号
 **/
  qlonglong skuId;

/**
 * @brief 商品SKU库存
 **/
  qlonglong skuNum;

/**
 * @brief 商品操作所对应的商品增量消息状态。 
可选值  
ItemAdd（新增商品）  
ItemUpshelf（上架商品）  
ItemDownshelf（下架商品）  
ItemDelete（删除商品）  
ItemUpdate（更新商品）  
ItemRecommendDelete（取消橱窗推荐商品）  
ItemRecommendAdd（橱窗推荐商品）  
ItemZeroStock（商品卖空） 
ItemPunishDelete（小二删除商品） 
ItemPunishDownshelf（小二下架商品） 
ItemPunishCc（小二CC商品） 
ItemSkuZeroStock（商品SKU卖空） 
ItemStockChanged（修改商品库存）
 **/
  QString status;

/**
 * @brief 商品标题,不能超过60字节
 **/
  QString title;

/**
 * @brief 消息所属的用户编号
 **/
  qlonglong userId;

};

#endif  /* NOTIFYITEM_H */
