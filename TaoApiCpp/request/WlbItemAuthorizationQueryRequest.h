#ifndef WLBITEMAUTHORIZATIONQUERYREQUEST_H
#define WLBITEMAUTHORIZATIONQUERYREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/WlbItemAuthorizationQueryResponse.h>

/**
 * TOP API: 查询授权关系,可由货主或被授权人查询。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbItemAuthorizationQueryRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getItemId() const
;  void setItemId (qlonglong itemId);

 QString getName() const
;  void setName (QString name);

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);

 QString getRuleCode() const
;  void setRuleCode (QString ruleCode);

 QString getStatus() const
;  void setStatus (QString status);

 QString getType() const
;  void setType (QString type);


  virtual WlbItemAuthorizationQueryResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 授权商品ID
 **/
  qlonglong itemId;

/**
 * @brief 授权名称
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
 * @brief 授权编码
 **/
  QString ruleCode;

/**
 * @brief 状态： 只能输入如下值,范围外的默认按VALID处理;不选则查询所有;  
VALID -- 1 有效； INVALIDATION -- 2 失效
 **/
  QString status;

/**
 * @brief 类型：可由不同角色来查询，默认值OWNER, 
OWNER -- 授权人, 
ON_COMMISSION -- 被授权人
 **/
  QString type;

};

#endif  /* WLBITEMAUTHORIZATIONQUERYREQUEST_H */
