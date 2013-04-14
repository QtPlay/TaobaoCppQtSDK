#ifndef FENXIAOSKU_H
#define FENXIAOSKU_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 分销产品SKU
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoSku : public TaoDomain
{

public:
 virtual ~FenxiaoSku() { }

  QString getCostPrice() const;
  void setCostPrice (QString costPrice);
  QString getDealerCostPrice() const;
  void setDealerCostPrice (QString dealerCostPrice);
  qlonglong getId() const;
  void setId (qlonglong id);
  QString getName() const;
  void setName (QString name);
  QString getOuterId() const;
  void setOuterId (QString outerId);
  QString getProperties() const;
  void setProperties (QString properties);
  qlonglong getQuantity() const;
  void setQuantity (qlonglong quantity);
  qlonglong getScitemId() const;
  void setScitemId (qlonglong scitemId);
  QString getStandardPrice() const;
  void setStandardPrice (QString standardPrice);
  
  virtual void parseResponse();

private:
/**
 * @brief 代销采购价，单位：元
 **/
  QString costPrice;

/**
 * @brief 经销采购价
 **/
  QString dealerCostPrice;

/**
 * @brief SkuID
 **/
  qlonglong id;

/**
 * @brief 名称
 **/
  QString name;

/**
 * @brief 商家编码
 **/
  QString outerId;

/**
 * @brief sku的销售属性组合字符串。格式:pid:vid;pid:vid,如:1627207:3232483;1630696:3284570,表示:机身颜色:军绿色;手机套餐:一电一充。
 **/
  QString properties;

/**
 * @brief 库存
 **/
  qlonglong quantity;

/**
 * @brief 关联的后端商品id
 **/
  qlonglong scitemId;

/**
 * @brief 市场价
 **/
  QString standardPrice;

};

#endif  /* FENXIAOSKU_H */
