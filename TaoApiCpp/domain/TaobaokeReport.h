#ifndef TAOBAOKEREPORT_H
#define TAOBAOKEREPORT_H

#include <TaoApiCpp/TaoDomain.h>
#include <QList>
#include <QString>
#include <TaoApiCpp/domain/TaobaokeReportMember.h>


/**
 * @brief 淘宝客报表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TaobaokeReport : public TaoDomain
{

public:
 virtual ~TaobaokeReport() { }

  QList<TaobaokeReportMember> getTaobaokeReportMembers() const;
  void setTaobaokeReportMembers (QList<TaobaokeReportMember> taobaokeReportMembers);
  qlonglong getTotalResults() const;
  void setTotalResults (qlonglong totalResults);
  
  virtual void parseResponse();

private:
/**
 * @brief 淘宝客报表成员列表
 **/
  QList<TaobaokeReportMember> taobaokeReportMembers;

/**
 * @brief 搜索到的结果的总条数
 **/
  qlonglong totalResults;

};

#endif  /* TAOBAOKEREPORT_H */
