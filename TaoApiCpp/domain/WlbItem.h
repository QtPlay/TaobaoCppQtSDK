#ifndef WLBITEM_H
#define WLBITEM_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 物流宝商品
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbItem : public TaoDomain
{

public:
 virtual ~WlbItem() { }

  qlonglong getBrandId() const;
  void setBrandId (qlonglong brandId);
  QString getColor() const;
  void setColor (QString color);
  QString getCreator() const;
  void setCreator (QString creator);
  QString getFlag() const;
  void setFlag (QString flag);
  QDateTime getGmtCreate() const;
  void setGmtCreate (QDateTime gmtCreate);
  QDateTime getGmtModified() const;
  void setGmtModified (QDateTime gmtModified);
  QString getGoodsCat() const;
  void setGoodsCat (QString goodsCat);
  qlonglong getHeight() const;
  void setHeight (qlonglong height);
  qlonglong getId() const;
  void setId (qlonglong id);
  bool getIsDangerous() const;
  void setIsDangerous (bool isDangerous);
  bool getIsFriable() const;
  void setIsFriable (bool isFriable);
  bool getIsSku() const;
  void setIsSku (bool isSku);
  QString getItemCode() const;
  void setItemCode (QString itemCode);
  QString getLastModifier() const;
  void setLastModifier (QString lastModifier);
  qlonglong getLength() const;
  void setLength (qlonglong length);
  QString getName() const;
  void setName (QString name);
  QString getPackageMaterial() const;
  void setPackageMaterial (QString packageMaterial);
  qlonglong getParentId() const;
  void setParentId (qlonglong parentId);
  qlonglong getPrice() const;
  void setPrice (qlonglong price);
  QString getPricingCat() const;
  void setPricingCat (QString pricingCat);
  QString getProperties() const;
  void setProperties (QString properties);
  qlonglong getPublishVersion() const;
  void setPublishVersion (qlonglong publishVersion);
  QString getRemark() const;
  void setRemark (QString remark);
  QString getStatus() const;
  void setStatus (QString status);
  QString getTitle() const;
  void setTitle (QString title);
  QString getType() const;
  void setType (QString type);
  qlonglong getUserId() const;
  void setUserId (qlonglong userId);
  QString getUserNick() const;
  void setUserNick (QString userNick);
  qlonglong getVolume() const;
  void setVolume (qlonglong volume);
  qlonglong getWeight() const;
  void setWeight (qlonglong weight);
  qlonglong getWidth() const;
  void setWidth (qlonglong width);
  
  virtual void parseResponse();

private:
/**
 * @brief 品牌ID
 **/
  qlonglong brandId;

/**
 * @brief 颜色
 **/
  QString color;

/**
 * @brief 创建人
 **/
  QString creator;

/**
 * @brief 标记，用逗号隔开的字符串。 
BIT_HAS_AUTHORIZE 第1位 是否有授权规则; 
BATCH  第2位 是否有批次规则； 
SYNCHRONIZATION 第3位 是否有同步规则。
 **/
  QString flag;

/**
 * @brief 创建日期
 **/
  QDateTime gmtCreate;

/**
 * @brief 修改日期
 **/
  QDateTime gmtModified;

/**
 * @brief 货类
 **/
  QString goodsCat;

/**
 * @brief 高
 **/
  qlonglong height;

/**
 * @brief 商品id
 **/
  qlonglong id;

/**
 * @brief 是否危险品
 **/
  bool isDangerous;

/**
 * @brief 是否易碎
 **/
  bool isFriable;

/**
 * @brief 是不是sku商品 
值为true或false
 **/
  bool isSku;

/**
 * @brief 商家编码
 **/
  QString itemCode;

/**
 * @brief 最后修改人
 **/
  QString lastModifier;

/**
 * @brief mm
 **/
  qlonglong length;

/**
 * @brief 商品的名称
 **/
  QString name;

/**
 * @brief 包装材料
 **/
  QString packageMaterial;

/**
 * @brief 父item的id，当item为物流宝子商品时，parent_id必填,否则不必填 
可通过父ID来得知商品的关系。
 **/
  qlonglong parentId;

/**
 * @brief 价格
 **/
  qlonglong price;

/**
 * @brief 计价货类
 **/
  QString pricingCat;

/**
 * @brief 属性key:value; key:value
 **/
  QString properties;

/**
 * @brief 发布版本号，用来同步商
 **/
  qlonglong publishVersion;

/**
 * @brief 商品备注
 **/
  QString remark;

/**
 * @brief 状态，item_status_valid -- 1 表示 有效 item_status_lock -- 2 表示锁住
 **/
  QString status;

/**
 * @brief 前台商品名称
 **/
  QString title;

/**
 * @brief 商品类型： 
NORMAL--普通类型; 
COMBINE--组合商品; 
DISTRIBUTION--分销商品; 
默认为NORMAL
 **/
  QString type;

/**
 * @brief 商品所有人淘宝ID
 **/
  qlonglong userId;

/**
 * @brief 商品所有人淘宝nick
 **/
  QString userNick;

/**
 * @brief 立方mm
 **/
  qlonglong volume;

/**
 * @brief 重量
 **/
  qlonglong weight;

/**
 * @brief 宽
 **/
  qlonglong width;

};

#endif  /* WLBITEM_H */
