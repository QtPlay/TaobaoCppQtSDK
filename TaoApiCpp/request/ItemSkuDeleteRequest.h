#ifndef ITEMSKUDELETEREQUEST_H
#define ITEMSKUDELETEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ItemSkuDeleteResponse.h>

/**
 * TOP API: 删除一个sku的数据 
需要删除的sku通过属性properties进行匹配查找
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemSkuDeleteRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getItemNum() const
;  void setItemNum (qlonglong itemNum);

 QString getItemPrice() const
;  void setItemPrice (QString itemPrice);

 QString getLang() const
;  void setLang (QString lang);

 qlonglong getNumIid() const
;  void setNumIid (qlonglong numIid);

 QString getProperties() const
;  void setProperties (QString properties);


  virtual ItemSkuDeleteResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief sku所属商品的数量,大于0的整数。当用户删除sku，使商品数量不等于sku数量之和时候，用于修改商品的数量，使sku能够删除成功。特别是删除最后一个sku的时候，一定要设置商品数量到正常的值，否则删除失败
 **/
  qlonglong itemNum;

/**
 * @brief sku所属商品的价格。当用户删除sku，使商品价格不属于sku价格之间的时候，用于修改商品的价格，使sku能够删除成功
 **/
  QString itemPrice;

/**
 * @brief Sku文字的版本。可选值:zh_HK(繁体),zh_CN(简体);默认值:zh_CN
 **/
  QString lang;

/**
 * @brief Sku所属商品数字id，可通过 taobao.item.get 获取。必选
 **/
  qlonglong numIid;

/**
 * @brief Sku属性串。格式:pid:vid;pid:vid,如: 1627207:3232483;1630696:3284570,表示机身颜色:军绿色;手机套餐:一电一充
 **/
  QString properties;

};

#endif  /* ITEMSKUDELETEREQUEST_H */
