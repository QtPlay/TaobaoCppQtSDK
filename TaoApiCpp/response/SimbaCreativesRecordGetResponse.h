#ifndef SIMBACREATIVESRECORDGETRESPONSE_H
#define SIMBACREATIVESRECORDGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/CreativeRecord.h>


/**
 * @brief TOP RESPONSE API: 根据一个创意Id列表取得创意对应的修改记录
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaCreativesRecordGetResponse : public TaoResponse
{
public:
 virtual ~SimbaCreativesRecordGetResponse() { }

  QList<CreativeRecord> getCreativerecords() const;
  void setCreativerecords (QList<CreativeRecord> creativerecords);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 创意修改对象列表
 **/
  QList<CreativeRecord> creativerecords;

};

#endif
