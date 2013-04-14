#ifndef UMPACTIVITIESGETRESPONSE_H
#define UMPACTIVITIESGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>


/**
 * @brief TOP RESPONSE API: 查询活动列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UmpActivitiesGetResponse : public TaoResponse
{
public:
 virtual ~UmpActivitiesGetResponse() { }

  QList<QString> getContents() const;
  void setContents (QList<QString> contents);  qlonglong getTotalCount() const;
  void setTotalCount (qlonglong totalCount);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 营销活动内容，可以通过ump sdk来进行处理
 **/
  QList<QString> contents;

/**
 * @brief 记录总数
 **/
  qlonglong totalCount;

};

#endif
