#ifndef PRODUCT_H
#define PRODUCT_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QList>
#include <QString>
#include <TaoApiCpp/domain/ProductImg.h>
#include <TaoApiCpp/domain/ProductPropImg.h>


/**
 * @brief 产品结构
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class Product : public TaoDomain
{

public:
 virtual ~Product() { }

  QString getBinds() const;
  void setBinds (QString binds);
  QString getBindsStr() const;
  void setBindsStr (QString bindsStr);
  QString getCatName() const;
  void setCatName (QString catName);
  qlonglong getCid() const;
  void setCid (qlonglong cid);
  qlonglong getCollectNum() const;
  void setCollectNum (qlonglong collectNum);
  QDateTime getCreated() const;
  void setCreated (QDateTime created);
  QString getCustomerProps() const;
  void setCustomerProps (QString customerProps);
  QString getDesc() const;
  void setDesc (QString desc);
  qlonglong getLevel() const;
  void setLevel (qlonglong level);
  QDateTime getModified() const;
  void setModified (QDateTime modified);
  QString getName() const;
  void setName (QString name);
  QString getOuterId() const;
  void setOuterId (QString outerId);
  QString getPicPath() const;
  void setPicPath (QString picPath);
  QString getPicUrl() const;
  void setPicUrl (QString picUrl);
  QString getPrice() const;
  void setPrice (QString price);
  qlonglong getProductId() const;
  void setProductId (qlonglong productId);
  QList<ProductImg> getProductImgs() const;
  void setProductImgs (QList<ProductImg> productImgs);
  QList<ProductPropImg> getProductPropImgs() const;
  void setProductPropImgs (QList<ProductPropImg> productPropImgs);
  QString getPropertyAlias() const;
  void setPropertyAlias (QString propertyAlias);
  QString getProps() const;
  void setProps (QString props);
  QString getPropsStr() const;
  void setPropsStr (QString propsStr);
  QString getSaleProps() const;
  void setSaleProps (QString saleProps);
  QString getSalePropsStr() const;
  void setSalePropsStr (QString salePropsStr);
  qlonglong getStatus() const;
  void setStatus (qlonglong status);
  QString getTsc() const;
  void setTsc (QString tsc);
  qlonglong getVerticalMarket() const;
  void setVerticalMarket (qlonglong verticalMarket);
  
  virtual void parseResponse();

private:
/**
 * @brief 产品的非关键属性列表.格式:pid:vid;pid:vid.
 **/
  QString binds;

/**
 * @brief 产品的非关键属性字符串列表.格式同props_str(<strong>注：</strong><font color="red">属性名称中的冒号":"被转换为："#cln#";  
分号";"被转换为："#scln#"
</font>)
 **/
  QString bindsStr;

/**
 * @brief 商品类目名称
 **/
  QString catName;

/**
 * @brief 商品类目ID.必须是叶子类目ID
 **/
  qlonglong cid;

/**
 * @brief 产品的collect次数（不提供数据，返回0)
 **/
  qlonglong collectNum;

/**
 * @brief 创建时间.格式:yyyy-mm-dd hh:mm:ss
 **/
  QDateTime created;

/**
 * @brief 用户自定义属性,结构：pid1:value1;pid2:value2 例如：“20000:优衣库”，表示“品牌:优衣库”
 **/
  QString customerProps;

/**
 * @brief 产品的描述.最大25000个字节
 **/
  QString desc;

/**
 * @brief 产品的级别level
 **/
  qlonglong level;

/**
 * @brief 修改时间.格式:yyyy-mm-dd hh:mm:ss
 **/
  QDateTime modified;

/**
 * @brief 产品名称
 **/
  QString name;

/**
 * @brief 外部产品ID
 **/
  QString outerId;

/**
 * @brief 产品对应的图片路径
 **/
  QString picPath;

/**
 * @brief 产品的主图片地址.(绝对地址,格式:http://host/image_path)
 **/
  QString picUrl;

/**
 * @brief 产品的市场价.单位为元.精确到2位小数;如:200.07
 **/
  QString price;

/**
 * @brief 产品ID
 **/
  qlonglong productId;

/**
 * @brief 产品的子图片.目前最多支持4张。fields中设置为product_imgs.id、product_imgs.url、product_imgs.position 等形式就会返回相应的字段
 **/
  QList<ProductImg> productImgs;

/**
 * @brief 产品的属性图片.比如说黄色对应的产品图片,绿色对应的产品图片。fields中设置为product_prop_imgs.id、  
product_prop_imgs.props、product_prop_imgs.url、product_prop_imgs.position等形式就会返回相应的字段
 **/
  QList<ProductPropImg> productPropImgs;

/**
 * @brief 销售属性值别名。格式为pid1:vid1:alias1;pid1:vid2:alia2。
 **/
  QString propertyAlias;

/**
 * @brief 产品的关键属性列表.格式：pid:vid;pid:vid
 **/
  QString props;

/**
 * @brief 产品的关键属性字符串列表.比如:品牌:诺基亚;型号:N73(<strong>注：</strong><font color="red">属性名称中的冒号":"被转换为："#cln#";  
分号";"被转换为："#scln#"
</font>)
 **/
  QString propsStr;

/**
 * @brief 产品的销售属性列表.格式:pid:vid;pid:vid
 **/
  QString saleProps;

/**
 * @brief 产品的销售属性字符串列表.格式同props_str(<strong>注：</strong><font color="red">属性名称中的冒号":"被转换为："#cln#";  
分号";"被转换为："#scln#"
</font>)
 **/
  QString salePropsStr;

/**
 * @brief 当前状态(0 商家确认 1 屏蔽 3 小二确认 2 未确认 -1 删除)
 **/
  qlonglong status;

/**
 * @brief 淘宝标准产品编码
 **/
  QString tsc;

/**
 * @brief 垂直市场,如：3（3C），4（鞋城）
 **/
  qlonglong verticalMarket;

};

#endif  /* PRODUCT_H */
