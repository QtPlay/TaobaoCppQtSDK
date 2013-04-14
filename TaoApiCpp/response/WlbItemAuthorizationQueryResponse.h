#ifndef WLBITEMAUTHORIZATIONQUERYRESPONSE_H
#define WLBITEMAUTHORIZATIONQUERYRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/WlbAuthorization.h>


/**
 * @brief TOP RESPONSE API: 查询授权关系,可由货主或被授权人查询。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbItemAuthorizationQueryResponse : public TaoResponse
{
public:
 virtual ~WlbItemAuthorizationQueryResponse() { }

  QList<WlbAuthorization> getAuthorizationList() const;
  void setAuthorizationList (QList<WlbAuthorization> authorizationList);  qlonglong getTotalCount() const;
  void setTotalCount (qlonglong totalCount);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 授权关系列表
 **/
  QList<WlbAuthorization> authorizationList;

/**
 * @brief 结果总数
 **/
  qlonglong totalCount;

};

#endif
