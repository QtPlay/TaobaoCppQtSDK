#ifndef ITEMSINVENTORYGETREQUEST_H
#define ITEMSINVENTORYGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ItemsInventoryGetResponse.h>

/**
 * TOP API: 获取当前用户作为卖家的仓库中的商品列表，并能根据传入的搜索条件对仓库中的商品列表进行过滤  
只能获得商品的部分信息，商品的详细信息请通过taobao.item.get获取
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemsInventoryGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getBanner() const
;  void setBanner (QString banner);

 qlonglong getCid() const
;  void setCid (qlonglong cid);

 QDateTime getEndModified() const
;  void setEndModified (QDateTime endModified);

 QString getFields() const
;  void setFields (QString fields);

 bool getHasDiscount() const
;  void setHasDiscount (bool hasDiscount);

 bool getIsEx() const
;  void setIsEx (bool isEx);

 bool getIsTaobao() const
;  void setIsTaobao (bool isTaobao);

 QString getOrderBy() const
;  void setOrderBy (QString orderBy);

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);

 QString getQ() const
;  void setQ (QString q);

 QString getSellerCids() const
;  void setSellerCids (QString sellerCids);

 QDateTime getStartModified() const
;  void setStartModified (QDateTime startModified);


  virtual ItemsInventoryGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 分类字段。可选值:

regular_shelved(定时上架)<br>
never_on_shelf(从未上架)<br>
off_shelf(我下架的)<br>
for_shelved(等待所有上架)<br>

sold_out(全部卖完)<br>
violation_off_shelf(违规下架的)<br>
默认查询的是for_shelved(等待所有上架)这个状态的商品<br>
<font color='red'>注：for_shelved(等待所有上架)=regular_shelved(定时上架)+never_on_shelf(从未上架)+off_shelf(我下架的)</font>
 **/
  QString banner;

/**
 * @brief 商品类目ID。ItemCat中的cid字段。可以通过taobao.itemcats.get取到
 **/
  qlonglong cid;

/**
 * @brief 商品结束修改时间
 **/
  QDateTime endModified;

/**
 * @brief 需返回的字段列表。可选值：Item商品结构体中的以下字段： 
approve_status,num_iid,title,nick,type,cid,pic_url,num,props,valid_thru, 

list_time,price,has_discount,has_invoice,has_warranty,has_showcase, 

modified,delist_time,postage_id,seller_cids,outer_id；字段之间用“,”分隔。 

不支持其他字段，如果需要获取其他字段数据，调用taobao.item.get。
 **/
  QString fields;

/**
 * @brief 是否参与会员折扣。可选值：true，false。默认不过滤该条件
 **/
  bool hasDiscount;

/**
 * @brief 商品是否在外部网店显示
 **/
  bool isEx;

/**
 * @brief 商品是否在淘宝显示
 **/
  bool isTaobao;

/**
 * @brief 排序方式。格式为column:asc/desc ，column可选值:list_time(上架时间),delist_time(下架时间),num(商品数量)，modified(最近修改时间);默认上架时间降序(即最新上架排在前面)。如按照上架时间降序排序方式为list_time:desc
 **/
  QString orderBy;

/**
 * @brief 页码。取值范围:大于零小于等于101的整数;默认值为1，即返回第一页数据。当页码超过101页时系统就会报错，故请大家在用此接口获取数据时尽可能的细化自己的搜索条件，例如根据修改时间分段获取商品。
 **/
  qlonglong pageNo;

/**
 * @brief 每页条数。取值范围:大于零的整数;最大值：200；默认值：40。
 **/
  qlonglong pageSize;

/**
 * @brief 搜索字段。搜索商品的title。
 **/
  QString q;

/**
 * @brief 卖家店铺内自定义类目ID。多个之间用“,”分隔。可以根据taobao.sellercats.list.get获得.(<font color="red">注：目前最多支持32个ID号传入</font>)
 **/
  QString sellerCids;

/**
 * @brief 商品起始修改时间
 **/
  QDateTime startModified;

};

#endif  /* ITEMSINVENTORYGETREQUEST_H */
