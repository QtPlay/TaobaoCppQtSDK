#ifndef SIMBAADGROUPIDSCHANGEDGETRESPONSE_H
#define SIMBAADGROUPIDSCHANGEDGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>


/**
 * @brief TOP RESPONSE API: 获取修改的推广组ID
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaAdgroupidsChangedGetResponse : public TaoResponse
{
public:
 virtual ~SimbaAdgroupidsChangedGetResponse() { }

  QList<qlonglong> getChangedAdgroupids() const;
  void setChangedAdgroupids (QList<qlonglong> changedAdgroupids);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 推广组ID列表
 **/
  QList<qlonglong> changedAdgroupids;

};

#endif
