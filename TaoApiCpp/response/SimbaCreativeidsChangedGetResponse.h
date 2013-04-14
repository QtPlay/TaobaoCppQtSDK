#ifndef SIMBACREATIVEIDSCHANGEDGETRESPONSE_H
#define SIMBACREATIVEIDSCHANGEDGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>


/**
 * @brief TOP RESPONSE API: 获取修改的创意ID
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaCreativeidsChangedGetResponse : public TaoResponse
{
public:
 virtual ~SimbaCreativeidsChangedGetResponse() { }

  QList<qlonglong> getChangedCreativeIds() const;
  void setChangedCreativeIds (QList<qlonglong> changedCreativeIds);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 创意ID列表
 **/
  QList<qlonglong> changedCreativeIds;

};

#endif
