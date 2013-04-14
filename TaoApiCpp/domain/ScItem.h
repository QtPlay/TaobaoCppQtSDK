#ifndef SCITEM_H
#define SCITEM_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 后端商品
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ScItem : public TaoDomain
{

public:
 virtual ~ScItem() { }

  QString getBarCode() const;
  void setBarCode (QString barCode);
  qlonglong getBrandId() const;
  void setBrandId (qlonglong brandId);
  QString getBrandName() const;
  void setBrandName (QString brandName);
  qlonglong getHeight() const;
  void setHeight (qlonglong height);
  qlonglong getIsAreaSale() const;
  void setIsAreaSale (qlonglong isAreaSale);
  bool getIsCostly() const;
  void setIsCostly (bool isCostly);
  bool getIsDangerous() const;
  void setIsDangerous (bool isDangerous);
  bool getIsFriable() const;
  void setIsFriable (bool isFriable);
  bool getIsWarranty() const;
  void setIsWarranty (bool isWarranty);
  qlonglong getItemId() const;
  void setItemId (qlonglong itemId);
  QString getItemName() const;
  void setItemName (QString itemName);
  qlonglong getItemType() const;
  void setItemType (qlonglong itemType);
  qlonglong getLength() const;
  void setLength (qlonglong length);
  QString getMatterStatus() const;
  void setMatterStatus (QString matterStatus);
  QString getOuterCode() const;
  void setOuterCode (QString outerCode);
  qlonglong getPrice() const;
  void setPrice (qlonglong price);
  QString getProperties() const;
  void setProperties (QString properties);
  QString getRemark() const;
  void setRemark (QString remark);
  qlonglong getVolume() const;
  void setVolume (qlonglong volume);
  qlonglong getWeight() const;
  void setWeight (qlonglong weight);
  qlonglong getWidth() const;
  void setWidth (qlonglong width);
  QString getWmsCode() const;
  void setWmsCode (QString wmsCode);
  
  virtual void parseResponse();

private:
/**
 * @brief 条形码
 **/
  QString barCode;

/**
 * @brief 品牌id
 **/
  qlonglong brandId;

/**
 * @brief 品牌名称
 **/
  QString brandName;

/**
 * @brief 高 单位：mm
 **/
  qlonglong height;

/**
 * @brief 1表示区域销售，0或是空是非区域销售
 **/
  qlonglong isAreaSale;

/**
 * @brief 贵重品:false:不是 true：是
 **/
  bool isCostly;

/**
 * @brief 是否危险 false：不是  true：是
 **/
  bool isDangerous;

/**
 * @brief 是否易碎 false ：不是  true：是
 **/
  bool isFriable;

/**
 * @brief 是否保质期：false:不是 true：是
 **/
  bool isWarranty;

/**
 * @brief 商品id
 **/
  qlonglong itemId;

/**
 * @brief 商品名称
 **/
  QString itemName;

/**
 * @brief 1.普通供应链商品 2.供应链组合主商品
 **/
  qlonglong itemType;

/**
 * @brief 长度 单位：mm
 **/
  qlonglong length;

/**
 * @brief LIQUID:液体，1：粉体，SOLID：固体
 **/
  QString matterStatus;

/**
 * @brief 商家编码
 **/
  QString outerCode;

/**
 * @brief 价格：分（吊牌价）
 **/
  qlonglong price;

/**
 * @brief 商品属性格式是  p1:v1,p2:v2,p3:v3
 **/
  QString properties;

/**
 * @brief 备注
 **/
  QString remark;

/**
 * @brief 体积：立方厘米
 **/
  qlonglong volume;

/**
 * @brief 重量.单位：克
 **/
  qlonglong weight;

/**
 * @brief 宽 单位：mm
 **/
  qlonglong width;

/**
 * @brief 仓储商编码，可以支持多个，格式wmsname:code
 **/
  QString wmsCode;

};

#endif  /* SCITEM_H */
