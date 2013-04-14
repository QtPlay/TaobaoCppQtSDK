#ifndef SPMRESULT_H
#define SPMRESULT_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QList>
#include <QString>
#include <TaoApiCpp/domain/TopSpm.h>


/**
 * @brief Appkey的站点导购数据
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SpmResult : public TaoDomain
{

public:
 virtual ~SpmResult() { }

  QString getAppKey() const;
  void setAppKey (QString appKey);
  QDateTime getDate() const;
  void setDate (QDateTime date);
  QList<TopSpm> getSpmModules() const;
  void setSpmModules (QList<TopSpm> spmModules);
  QList<TopSpm> getSpmPages() const;
  void setSpmPages (QList<TopSpm> spmPages);
  TopSpm getSpmSite() const;
  void setSpmSite (TopSpm spmSite);
  
  virtual void parseResponse();

private:
/**
 * @brief appkey
 **/
  QString appKey;

/**
 * @brief 日期
 **/
  QDateTime date;

/**
 * @brief 该APP所使用的SPM第四位的报表数据
 **/
  QList<TopSpm> spmModules;

/**
 * @brief 该APP所使用的SPM第三位的报表数据
 **/
  QList<TopSpm> spmPages;

/**
 * @brief 该APP的整体报表数据
 **/
  TopSpm spmSite;

};

#endif  /* SPMRESULT_H */
