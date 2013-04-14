#ifndef WLBITEMQUERYREQUEST_H
#define WLBITEMQUERYREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/WlbItemQueryResponse.h>

/**
 * TOP API: 根据状态、卖家、SKU等信息查询商品列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbItemQueryRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getIsSku() const
;  void setIsSku (QString isSku);

 QString getItemCode() const
;  void setItemCode (QString itemCode);

 QString getItemType() const
;  void setItemType (QString itemType);

 QString getName() const
;  void setName (QString name);

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);

 qlonglong getParentId() const
;  void setParentId (qlonglong parentId);

 QString getStatus() const
;  void setStatus (QString status);

 QString getTitle() const
;  void setTitle (QString title);


  virtual WlbItemQueryResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 是否是最小库存单元，只有最小库存单元的商品才可以有库存,值只能给"true","false"来表示; 
若值不在范围内，则按true处理
 **/
  QString isSku;

/**
 * @brief 商家编码
 **/
  QString itemCode;

/**
 * @brief ITEM类型(只允许输入以下英文或空) 
NORMAL  0:普通商品;  
COMBINE  1:是否是组合商品  
DISTRIBUTION  2:是否是分销商品(货主是别人) 
若值不在范围内，则按NORMAL处理
 **/
  QString itemType;

/**
 * @brief 商品名称
 **/
  QString name;

/**
 * @brief 当前页
 **/
  qlonglong pageNo;

/**
 * @brief 分页记录个数，如果用户输入的记录数大于50，则一页显示50条记录
 **/
  qlonglong pageSize;

/**
 * @brief 父ID,只有is_sku=1时才能有父ID，商品也可以没有付商品
 **/
  qlonglong parentId;

/**
 * @brief 只能输入以下值或空： 
ITEM_STATUS_VALID -- 1 表示 有效； 
ITEM_STATUS_LOCK  -- 2 表示锁住。 
若值不在范围内，按ITEM_STATUS_VALID处理
 **/
  QString status;

/**
 * @brief 商品前台销售名字
 **/
  QString title;

};

#endif  /* WLBITEMQUERYREQUEST_H */
