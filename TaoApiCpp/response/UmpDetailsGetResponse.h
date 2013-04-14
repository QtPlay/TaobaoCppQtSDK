#ifndef UMPDETAILSGETRESPONSE_H
#define UMPDETAILSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>


/**
 * @brief TOP RESPONSE API: 分页查询优惠详情列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UmpDetailsGetResponse : public TaoResponse
{
public:
 virtual ~UmpDetailsGetResponse() { }

  QList<QString> getContents() const;
  void setContents (QList<QString> contents);  qlonglong getTotalCount() const;
  void setTotalCount (qlonglong totalCount);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 活动详情的信息
 **/
  QList<QString> contents;

/**
 * @brief 记录总数
 **/
  qlonglong totalCount;

};

#endif
