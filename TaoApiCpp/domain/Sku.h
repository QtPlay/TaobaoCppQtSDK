#ifndef SKU_H
#define SKU_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief Sku结构
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class Sku : public TaoDomain
{

public:
 virtual ~Sku() { }

  QString getCreated() const;
  void setCreated (QString created);
  QString getIid() const;
  void setIid (QString iid);
  QString getModified() const;
  void setModified (QString modified);
  qlonglong getNumIid() const;
  void setNumIid (qlonglong numIid);
  QString getOuterId() const;
  void setOuterId (QString outerId);
  QString getPrice() const;
  void setPrice (QString price);
  QString getProperties() const;
  void setProperties (QString properties);
  QString getPropertiesName() const;
  void setPropertiesName (QString propertiesName);
  qlonglong getQuantity() const;
  void setQuantity (qlonglong quantity);
  QString getSkuDeliveryTime() const;
  void setSkuDeliveryTime (QString skuDeliveryTime);
  qlonglong getSkuId() const;
  void setSkuId (qlonglong skuId);
  qlonglong getSkuSpecId() const;
  void setSkuSpecId (qlonglong skuSpecId);
  QString getStatus() const;
  void setStatus (QString status);
  qlonglong getWithHoldQuantity() const;
  void setWithHoldQuantity (qlonglong withHoldQuantity);
  
  virtual void parseResponse();

private:
/**
 * @brief sku创建日期 时间格式：yyyy-MM-dd HH:mm:ss
 **/
  QString created;

/**
 * @brief sku所属商品id(注意：iid近期即将废弃，请用num_iid参数)
 **/
  QString iid;

/**
 * @brief sku最后修改日期 时间格式：yyyy-MM-dd HH:mm:ss
 **/
  QString modified;

/**
 * @brief sku所属商品数字id
 **/
  qlonglong numIid;

/**
 * @brief 商家设置的外部id
 **/
  QString outerId;

/**
 * @brief 属于这个sku的商品的价格 取值范围:0-100000000;精确到2位小数;单位:元。如:200.07，表示:200元7分。
 **/
  QString price;

/**
 * @brief sku的销售属性组合字符串（颜色，大小，等等，可通过类目API获取某类目下的销售属性）,格式是p1:v1;p2:v2
 **/
  QString properties;

/**
 * @brief sku所对应的销售属性的中文名字串，格式如：pid1:vid1:pid_name1:vid_name1;pid2:vid2:pid_name2:vid_name2……
 **/
  QString propertiesName;

/**
 * @brief 属于这个sku的商品的数量，
 **/
  qlonglong quantity;

/**
 * @brief sku级别发货时间
 **/
  QString skuDeliveryTime;

/**
 * @brief sku的id
 **/
  qlonglong skuId;

/**
 * @brief 表示SKu上的产品规格信息
 **/
  qlonglong skuSpecId;

/**
 * @brief sku状态。 normal:正常 ；delete:删除
 **/
  QString status;

/**
 * @brief 商品在付款减库存的状态下，该sku上未付款的订单数量
 **/
  qlonglong withHoldQuantity;

};

#endif  /* SKU_H */
