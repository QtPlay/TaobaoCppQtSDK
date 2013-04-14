#ifndef SCITEMQUERYREQUEST_H
#define SCITEMQUERYREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ScitemQueryResponse.h>

/**
 * TOP API: 查询后端商品
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ScitemQueryRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getBarCode() const
;  void setBarCode (QString barCode);

 QString getItemName() const
;  void setItemName (QString itemName);

 qlonglong getItemType() const
;  void setItemType (qlonglong itemType);

 QString getOuterCode() const
;  void setOuterCode (QString outerCode);

 qlonglong getPageIndex() const
;  void setPageIndex (qlonglong pageIndex);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);

 QString getWmsCode() const
;  void setWmsCode (QString wmsCode);


  virtual ScitemQueryResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 条形码
 **/
  QString barCode;

/**
 * @brief 商品名称
 **/
  QString itemName;

/**
 * @brief ITEM类型(只允许输入以下英文或空) NORMAL 0:普通商品; COMBINE 1:是否是组合商品 DISTRIBUTION
 **/
  qlonglong itemType;

/**
 * @brief 商家给商品的一个编码
 **/
  QString outerCode;

/**
 * @brief 当前页码数
 **/
  qlonglong pageIndex;

/**
 * @brief 分页记录个数，如果用户输入的记录数大于50，则一页显示50条记录
 **/
  qlonglong pageSize;

/**
 * @brief 仓库编码
 **/
  QString wmsCode;

};

#endif  /* SCITEMQUERYREQUEST_H */
